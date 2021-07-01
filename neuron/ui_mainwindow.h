/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comL;
    QPushButton *openButton;
    QPushButton *closeButton;
    QPushButton *clampButton;
    QLineEdit *servo_1_lineEdit;
    QLineEdit *servo_2_lineEdit;
    QLineEdit *servo_3_lineEdit;
    QLineEdit *servo_4_lineEdit;
    QLineEdit *servo_5_lineEdit;
    QLineEdit *servo_6_lineEdit;
    QPushButton *set_posButton;
    QPushButton *stand_upButton;
    QLabel *S1_label;
    QLabel *S2_label;
    QLabel *S3_label;
    QLabel *S4_label;
    QLabel *S5_label;
    QLabel *S6_label;
    QPushButton *sitButton;
    QPushButton *getXYButton;
    QSlider *S6_verSlider;
    QSlider *S5_verSlider;
    QSlider *S4_verSlider;
    QSlider *S3_verSlider;
    QSlider *S2_verSlider;
    QSlider *S1_verSlider;
    QPushButton *socketButton;
    QSpinBox *servo_1_spinBox;
    QSpinBox *servo_2_spinBox;
    QSpinBox *servo_3_spinBox;
    QSpinBox *servo_4_spinBox;
    QSpinBox *servo_5_spinBox;
    QSpinBox *servo_6_spinBox;
    QLineEdit *All_Servos_lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 765);
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 40, 278, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comL = new QComboBox(layoutWidget);
        comL->setObjectName(QString::fromUtf8("comL"));

        horizontalLayout->addWidget(comL);

        openButton = new QPushButton(layoutWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout->addWidget(openButton);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);

        clampButton = new QPushButton(MainWindow);
        clampButton->setObjectName(QString::fromUtf8("clampButton"));
        clampButton->setGeometry(QRect(450, 110, 89, 25));
        servo_1_lineEdit = new QLineEdit(MainWindow);
        servo_1_lineEdit->setObjectName(QString::fromUtf8("servo_1_lineEdit"));
        servo_1_lineEdit->setEnabled(false);
        servo_1_lineEdit->setGeometry(QRect(20, 690, 61, 25));
        servo_2_lineEdit = new QLineEdit(MainWindow);
        servo_2_lineEdit->setObjectName(QString::fromUtf8("servo_2_lineEdit"));
        servo_2_lineEdit->setEnabled(false);
        servo_2_lineEdit->setGeometry(QRect(120, 690, 61, 25));
        servo_3_lineEdit = new QLineEdit(MainWindow);
        servo_3_lineEdit->setObjectName(QString::fromUtf8("servo_3_lineEdit"));
        servo_3_lineEdit->setEnabled(false);
        servo_3_lineEdit->setGeometry(QRect(220, 690, 61, 25));
        servo_4_lineEdit = new QLineEdit(MainWindow);
        servo_4_lineEdit->setObjectName(QString::fromUtf8("servo_4_lineEdit"));
        servo_4_lineEdit->setEnabled(false);
        servo_4_lineEdit->setGeometry(QRect(320, 690, 61, 25));
        servo_5_lineEdit = new QLineEdit(MainWindow);
        servo_5_lineEdit->setObjectName(QString::fromUtf8("servo_5_lineEdit"));
        servo_5_lineEdit->setEnabled(false);
        servo_5_lineEdit->setGeometry(QRect(410, 690, 61, 25));
        servo_6_lineEdit = new QLineEdit(MainWindow);
        servo_6_lineEdit->setObjectName(QString::fromUtf8("servo_6_lineEdit"));
        servo_6_lineEdit->setEnabled(false);
        servo_6_lineEdit->setGeometry(QRect(510, 690, 61, 25));
        set_posButton = new QPushButton(MainWindow);
        set_posButton->setObjectName(QString::fromUtf8("set_posButton"));
        set_posButton->setGeometry(QRect(140, 180, 341, 25));
        stand_upButton = new QPushButton(MainWindow);
        stand_upButton->setObjectName(QString::fromUtf8("stand_upButton"));
        stand_upButton->setGeometry(QRect(230, 110, 89, 25));
        S1_label = new QLabel(MainWindow);
        S1_label->setObjectName(QString::fromUtf8("S1_label"));
        S1_label->setGeometry(QRect(40, 230, 61, 17));
        S2_label = new QLabel(MainWindow);
        S2_label->setObjectName(QString::fromUtf8("S2_label"));
        S2_label->setGeometry(QRect(190, 230, 61, 17));
        S3_label = new QLabel(MainWindow);
        S3_label->setObjectName(QString::fromUtf8("S3_label"));
        S3_label->setGeometry(QRect(360, 230, 61, 17));
        S4_label = new QLabel(MainWindow);
        S4_label->setObjectName(QString::fromUtf8("S4_label"));
        S4_label->setGeometry(QRect(530, 230, 181, 17));
        S5_label = new QLabel(MainWindow);
        S5_label->setObjectName(QString::fromUtf8("S5_label"));
        S5_label->setGeometry(QRect(680, 230, 61, 17));
        S6_label = new QLabel(MainWindow);
        S6_label->setObjectName(QString::fromUtf8("S6_label"));
        S6_label->setGeometry(QRect(840, 230, 61, 17));
        sitButton = new QPushButton(MainWindow);
        sitButton->setObjectName(QString::fromUtf8("sitButton"));
        sitButton->setGeometry(QRect(120, 110, 89, 25));
        getXYButton = new QPushButton(MainWindow);
        getXYButton->setObjectName(QString::fromUtf8("getXYButton"));
        getXYButton->setGeometry(QRect(680, 180, 151, 25));
        S6_verSlider = new QSlider(MainWindow);
        S6_verSlider->setObjectName(QString::fromUtf8("S6_verSlider"));
        S6_verSlider->setGeometry(QRect(820, 400, 21, 251));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(S6_verSlider->sizePolicy().hasHeightForWidth());
        S6_verSlider->setSizePolicy(sizePolicy);
        S6_verSlider->setSizeIncrement(QSize(1, 1));
        S6_verSlider->setMaximum(180);
        S6_verSlider->setValue(93);
        S6_verSlider->setOrientation(Qt::Vertical);
        S6_verSlider->setTickPosition(QSlider::TicksBelow);
        S6_verSlider->setTickInterval(2);
        S5_verSlider = new QSlider(MainWindow);
        S5_verSlider->setObjectName(QString::fromUtf8("S5_verSlider"));
        S5_verSlider->setGeometry(QRect(700, 400, 16, 251));
        S5_verSlider->setMaximum(180);
        S5_verSlider->setValue(93);
        S5_verSlider->setOrientation(Qt::Vertical);
        S4_verSlider = new QSlider(MainWindow);
        S4_verSlider->setObjectName(QString::fromUtf8("S4_verSlider"));
        S4_verSlider->setGeometry(QRect(540, 400, 16, 251));
        S4_verSlider->setMaximum(180);
        S4_verSlider->setValue(93);
        S4_verSlider->setOrientation(Qt::Vertical);
        S3_verSlider = new QSlider(MainWindow);
        S3_verSlider->setObjectName(QString::fromUtf8("S3_verSlider"));
        S3_verSlider->setGeometry(QRect(380, 400, 16, 251));
        S3_verSlider->setMaximum(180);
        S3_verSlider->setValue(93);
        S3_verSlider->setOrientation(Qt::Vertical);
        S2_verSlider = new QSlider(MainWindow);
        S2_verSlider->setObjectName(QString::fromUtf8("S2_verSlider"));
        S2_verSlider->setGeometry(QRect(220, 400, 16, 251));
        S2_verSlider->setMaximum(180);
        S2_verSlider->setValue(93);
        S2_verSlider->setOrientation(Qt::Vertical);
        S1_verSlider = new QSlider(MainWindow);
        S1_verSlider->setObjectName(QString::fromUtf8("S1_verSlider"));
        S1_verSlider->setGeometry(QRect(60, 400, 16, 251));
        S1_verSlider->setMaximum(180);
        S1_verSlider->setValue(93);
        S1_verSlider->setOrientation(Qt::Vertical);
        socketButton = new QPushButton(MainWindow);
        socketButton->setObjectName(QString::fromUtf8("socketButton"));
        socketButton->setGeometry(QRect(680, 110, 151, 25));
        servo_1_spinBox = new QSpinBox(MainWindow);
        servo_1_spinBox->setObjectName(QString::fromUtf8("servo_1_spinBox"));
        servo_1_spinBox->setGeometry(QRect(10, 260, 121, 61));
        QFont font;
        font.setPointSize(24);
        servo_1_spinBox->setFont(font);
        servo_1_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_1_spinBox->setMaximum(180);
        servo_1_spinBox->setValue(93);
        servo_2_spinBox = new QSpinBox(MainWindow);
        servo_2_spinBox->setObjectName(QString::fromUtf8("servo_2_spinBox"));
        servo_2_spinBox->setGeometry(QRect(170, 260, 121, 61));
        servo_2_spinBox->setFont(font);
        servo_2_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_2_spinBox->setMaximum(180);
        servo_2_spinBox->setValue(93);
        servo_3_spinBox = new QSpinBox(MainWindow);
        servo_3_spinBox->setObjectName(QString::fromUtf8("servo_3_spinBox"));
        servo_3_spinBox->setGeometry(QRect(330, 260, 121, 61));
        servo_3_spinBox->setFont(font);
        servo_3_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_3_spinBox->setMaximum(180);
        servo_3_spinBox->setValue(93);
        servo_4_spinBox = new QSpinBox(MainWindow);
        servo_4_spinBox->setObjectName(QString::fromUtf8("servo_4_spinBox"));
        servo_4_spinBox->setGeometry(QRect(490, 260, 121, 61));
        servo_4_spinBox->setFont(font);
        servo_4_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_4_spinBox->setMaximum(180);
        servo_4_spinBox->setValue(93);
        servo_5_spinBox = new QSpinBox(MainWindow);
        servo_5_spinBox->setObjectName(QString::fromUtf8("servo_5_spinBox"));
        servo_5_spinBox->setGeometry(QRect(650, 260, 121, 61));
        servo_5_spinBox->setFont(font);
        servo_5_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_5_spinBox->setMaximum(180);
        servo_5_spinBox->setValue(93);
        servo_6_spinBox = new QSpinBox(MainWindow);
        servo_6_spinBox->setObjectName(QString::fromUtf8("servo_6_spinBox"));
        servo_6_spinBox->setGeometry(QRect(810, 260, 121, 61));
        servo_6_spinBox->setFont(font);
        servo_6_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::down-button{\n"
"    width: 50\n"
"}\n"
"QSpinBox::up-button{\n"
"    width: 50\n"
"}\n"
""));
        servo_6_spinBox->setMaximum(180);
        servo_6_spinBox->setValue(93);
        All_Servos_lineEdit = new QLineEdit(MainWindow);
        All_Servos_lineEdit->setObjectName(QString::fromUtf8("All_Servos_lineEdit"));
        All_Servos_lineEdit->setGeometry(QRect(10, 340, 441, 51));
        All_Servos_lineEdit->setFont(font);
        All_Servos_lineEdit->setMaxLength(28);
        pushButton = new QPushButton(MainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 340, 121, 51));
        QFont font1;
        font1.setPointSize(18);
        pushButton->setFont(font1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "main", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "CLOSE", nullptr));
        clampButton->setText(QCoreApplication::translate("MainWindow", "CLAMP", nullptr));
        servo_1_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        servo_2_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        servo_3_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        servo_4_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        servo_5_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        servo_6_lineEdit->setText(QCoreApplication::translate("MainWindow", "93", nullptr));
        set_posButton->setText(QCoreApplication::translate("MainWindow", "SET POSITION", nullptr));
        stand_upButton->setText(QCoreApplication::translate("MainWindow", "Stand UP", nullptr));
        S1_label->setText(QCoreApplication::translate("MainWindow", "Servo 1", nullptr));
        S2_label->setText(QCoreApplication::translate("MainWindow", "Servo 2", nullptr));
        S3_label->setText(QCoreApplication::translate("MainWindow", "Servo 3", nullptr));
        S4_label->setText(QCoreApplication::translate("MainWindow", "Servo 4", nullptr));
        S5_label->setText(QCoreApplication::translate("MainWindow", "Servo 5", nullptr));
        S6_label->setText(QCoreApplication::translate("MainWindow", "Servo 6", nullptr));
        sitButton->setText(QCoreApplication::translate("MainWindow", "SIT", nullptr));
        getXYButton->setText(QCoreApplication::translate("MainWindow", "Get XY", nullptr));
        socketButton->setText(QCoreApplication::translate("MainWindow", "Read Detetor", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
