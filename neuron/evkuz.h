#ifndef EVKUZ_H
#define EVKUZ_H


/*
 * 01.07.2021
 *
 * Сделал проверку вычисления прямой кинематичесой задачи.
 * По нажатию кнопки "Get XY" внутри соответствующего слота запускаем сигнал
 * FW_Kinemaic_Signal(int S3, int S4, int S5, int l1, int l2, int l3)
 * На это внутри класса Robo_Math срабатывает слот FW_Kinemaic_Slot(int S3, int S4, int S5, int l1, int l2, int l3),
 * Который проводит вычисления x,y,z для всех 3 звеньев l1, l2, l3. И полученные конечные значения x3, y3, z3 отправляет
 * сигналом Return_FW_Kinematic_XYZ_Signal(x3, y3, z3) в класс MainWindow, где соответствующий слот
 * Return_FW_Kinematic_XYZ_Slot(int X, int Y, int Z) записывает эти данные в лог.
 *
 * #################################3
 * 29.06.2021
 *
 * Создал класс class Robo_Math : public QObject
 * Для вычисления значений углов через длину робота -> через значения XY центра кубика и угол поворота привода 6.
 * Т.е. это дополнительный к нейронке способ вычисления.
 *
 * Жмем кнопку "Get XY", в соответствующем слоте получаем XY от simpledetector.
 * И передаем значения XY через сигнал Pass_XY_Signal в класс Robo_Math
 * В классе Robo_Math этот сигнал обрабатывается слотом Pass_XY_Slot.
 * Этот слот по значениям XY вычисляет длину EL(float) и передает значение EL обратно в класс MainWindow.
 * Передача проиходит через сигнал Return_EL_Signal(EL), а в классе MainWindow обработку проводит
 * слот Return_EL_Slot(float EL), который выводит значение EL в лог.
 *
 * Проверил на тестовых данных - все работает, данные из класса в класс передаются.
 * Теперь возникает следующая задача.
 *
 * ДЛя простоты считаем, что кубик лежит прямо напротив робота и привод 6 не надо поворачивать.
 * Тогда проекция робота на пол в момент, кода он готов взять кубик, это есть некая длина L.
 * Эту длину легко вычислить, зная углы приводов 5,4,3 и длину соответствующих плечей робота.
 * А вот как сделать обратные вычисления - зная длину L из координат центра кубика X,Y - как вычислить значения 3 углов ?
 * Подбором-перебором ?
 * Такая задача называется Inverse Kinematics (IK) technology
 * ######################################
 * 25.06.2021
 * Т.к. теперь мы разделяем движение "туда" и "обратно" были внесены необходимые изменения
 * во все соответствующие ф-ции.
 * ######################################
 * 19.06.2021
 * Добавил ввод данных для приводов из строки - All_Servos_lineEdit
 * И вслед за этим обновление текста в QSpinBox-ах.
 *
 * ##############################
 * 14.06.2021
 *
 * Кажись заработало "Пробуем QSpinBox вместо QLineEdit"
 * Т.к. большой размер шрифта, то и общее окно программы пришлось увеличить.
 * Фиксируем.
 * #######################
 * 12.06.2021
 * Пробуем QSpinBox вместо QLineEdit
 *
 * servo_1_lineEdit
 * servo_1_spinBox
 * servo_2_spinBox
 * ...
 * Очень много провозился.
 * Оказывается, если в окне "Change StyleSheet" сначала поставить размер шрифта, то все остальные настройки не считываются.
 * Поэтому размер шрифта меняем в самом окне QtDesigner, а далее через "Change StyleSheet"
 * #######################################
 * 10.06.2021
 * Each QWidget has slots repaint() (forced immediate) and update() (queued deferred)
 *
 * Выяснилось, что процедуру захвата лучше разделить на 4 этапа
 * 1. Позиционируем из исходной, захват горизонтально над кубиком. Далее 6 привод не меняется.
 * 2. ОТкрываем захват
 * 3. Чуть опускаем (3,4,5 приводы)
 * 4. Делаем захват.
 *
 * Можно сразу вставать в п.3
 *
 * Дальний ряд (ДР) - (4,5) = (45,155)
 *
 * #############################################
 * 08.06.2021
 * Заменил тип массива Servos на usigned char.
 * Для этого пришлось переписать ф-цию отправки данных роботу - HiWonder::GoToPosition(QByteArray &position),
 * и ф-ции вывода данных на печать.
 * Поведение робота от этого не изменилось, значит точно нейронка неправильно работает.
 *
 * Последний рабочий коммит 765014e4ae86b918485ae40a31d33f283eb85016
 * Фиксируем.
 * коммит с этим фиксом  ba7a1effc39f82f9073fc5d3ce7494d81a074cd0
 * #############################################
 * 07.06.2021
 * Подключаем библиотеку mcinfer
 * ...
 * Заработало. НЕ путаем сборку debug  и release :)
 *
 * Порядок работы :
 * Подключаем веб камеру по usb
 *
 * Запускаем скрипт
 * ~/qt-projects/iqr_lit/simpledetector_cpp/.run.sh
 *
 * Запусаем hiwonder-qt
 * По нажатию кнопки "Read Detetor" ( слот "on_socketButton_clicked()" ) Происходит считывание данных из сокета  - это координаты x,y центра кубика.
 * Далее эти координаты передаются в нейронную сеть fuzzy_model на обработку и сеть возвращает положения углов
 * приводов 3-6 робота - это 4 числа в диапазоне 0 - 180.
 * Приводы 1-2 почти не используются - это захват и положение захвата в горизонтальной плоскоскти.
 *
 * ###################################################
 * 03.06.2021
 * Работаем на ветке hw-qt-class
 * Запускаем класс hiwonder
 * ...
 * Запустил.
 * Скорее сего было лишним указывать, что класс HiWonder имеет родительский класс QOBJECT.
 * Закомментировал, работает и без этого.
 * Добавил ф-цию :
 * void GUI_Write_To_Log (int value, QString log_message); //Пишет в лог-файл номер ошибки value и сообщение message
 *
 * Теперь запись в лог (один и тот же) есть и в классе HiWonder и в MainWindow.
 * Делаем фикс перед последующим переносом работы с ком-портом в класс HiWonder.
 * Пока еще запись в ком-порт из главного окна.
 *
 * commit 797ac2dac91d262a6c282a2163f0e8285f08c54f
 * #####################
 *
 * Теперь переносим работу компорта в класс HiWonder из класса MainWindow.
 * По нажатию кнопки генерим сигнал Open_Port_Signal, в ответ запускается слот Robot->Open_Port_Slot
 * Работа с ком-портом перенесена в класс HiWonder.
 * Доработана запись в лог. Еще нужно данные записывать в лог в виде строки.
 *
 * На очереди считывание из ком-порта.
 *
 *
 *
 * +++++++++++++++++++++++++++++++++++++++++++
02.06.2021
Решено переписать на qt всю программу управления роботом, т.к. библиотека нейронной сети написана на С++
Попробовал подключить форму form.ui, сделанную ранее для python (однако в Qt Designer), и не пошло.
Проект не компилируется.
Оказалось, что в файле form.ui, переименованном в mainwindow.ui имя окна значилось "main", а надо "MainWindow"


- Открываем лог-файл, пишем сообщение о начале работы программы
- Открываем порт по нажатию кнопки "OPEN"
- Отправялем данные в порт (лампочки мигают)... и робот не реагирует
...
По ошибке отправлял hwr_Start_position вместо sit_down_position вот он и стоял на месте.
Теперь-то все работает :) !!!!!

- Работают кнопки "SIT" и "Stand UP"
- Переходим на ветку git hw_class и создаем в ней класс hiwonder

*/
#endif // EVKUZ_H
