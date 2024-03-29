#ifndef MODEL1_H
#define MODEL1_H
/* This file is automatically generated by SCOptimizer */

#include "mcinfer.h"

fuzzy_model model={ //++++++++++++++ model1
0, /* model_ready set to OK */
1, /* engine code (algorithm type) */
1, /* min_inference_mode */
1, /* database type */
2, /* number of input variables */
4, /* number of output variables */

/* Input variable normalization parameters */
{{0.001504f,-0.201504f},{0.002611f,-0.127937f}},

/* Output variable normalization parameters */
{{0.010638f,-0.117021f},{0.014925f,0.000000f},{0.016949f,-1.881356f},{0.006494f,-0.168831f}},

/* number of input MF's per variable*/ 
{9,5},
/* input MF paramteres */ 
{
	{descending,0.081579f,0,0,0.303231f},{triangular,0.303759f,0,0.128599f,0.070145f},{triangular,0.357895f,0,0.035073f,0.092065f},{triangular,0.441353f,0,0.070145f,0.017536f},{triangular,0.509023f,0,0.113986f,0.115447f},{triangular,0.585714f,0,0.033611f,0.029227f},{triangular,0.626316f,0,0.049686f,0.198744f},{triangular,0.826316f,0,0.189976f,0.036534f},{ascending,0.916792f,0,0.139316f,0},
	{descending,0.063969f,0,0,0.125583f},{triangular,0.285901f,0,0.310113f,0.310113f},{triangular,0.473238f,0,0.057666f,0.057666f},{triangular,0.564621f,0,0.121739f,0.121739f},{ascending,0.813316f,0,0.366497f,0}
	},

/* number of output MF's per variable*/ 
{5,5,5,5},
/* output MF paramteres */ 
{
	{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},
	{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},
	{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},
	{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0},{exact,0.000000f,0,0,0}
	},

/* Rule database */
45, /*number of rules */

/* index */
{0}, /* empty */
/* database */
{
	0x1A,0xAB,0xF3,0x3E,0x4A,0x7B,0x7D,0x3F,0x32,0x79,0x7A,0x3F,0x71,0xC9,0xE8,0x3E,0x5F,0x81,0x00,0x3F,0x21,0xDD,0x19,0x3F,0xDE,0x92,0x66,0x3F,0x07,0xFB,0x7F,0x3F,0x02,0x6B,0x10,0x3F,0x83,0xCF,0x7F,0x3F,0x93,0xD6,0x6E,0x3F,0xF2,0x9B,0x4F,0x3F,0x30,0x3A,0x42,0x3E,0xA4,0x7C,0x17,0x3F,0x3D,0xB2,0x08,0x3F,0x59,0x2C,0x2B,0x3F,0xC2,0xE1,0xD4,0x3E,0xFD,0xA3,0x06,0x3F,0xDD,0xA2,0x04,0x3F,0x6A,0x5E,0xA8,0x3A,0x97,0xFD,0x03,0x3F,0xB2,0x15,0x7F,0x3F,0xDF,0x36,0x7D,0x3F,0xD6,0xD9,0xE7,0x3E,0x62,0x25,0x5D,0x3E,0x14,0x46,0x09,0x3F,0x16,0x89,0x3E,0x3E,0xFB,0x2E,0x24,0x3F,0x6E,0x45,0x6B,0x3E,0x60,0x8B,0x4D,0x3D,0xA5,0xC0,0x62,0x3D,0x98,0xA3,0x7F,0x3F,0xDE,0xB5,0x60,0x3E,0x80,0xB1,0x86,0x3E,0x4A,0xCE,0xC4,0x3D,0xF5,0x85,0x95,0x3E,0x30,0xF8,0xF4,0x3D,0x15,0x46,0xCC,0x3E,0x9F,0x2F,0xD5,0x3E,0xFB,0x7E,0x94,0x3E,0x6B,0x02,0x0E,0x3F,0xBC,0xCC,0x7F,0x3F,0xA0,0x5B,0x7E,0x3F,0xC0,0x02,0xEC,0x3E,0x25,0xAD,0x0B,0x3F,0xF8,0x30,0x78,0x3F,0xFE,0x24,0x7E,0x3F,0x06,0xC6,0x0E,0x3F,0xF1,0x7E,0xAB,0x3E,0x72,0xF1,0xBA,0x3A,0xA5,0xB7,0xF4,0x3B,0xC4,0x6B,0x2D,0x3F,0x17,0x35,0xB3,0x3D,0x6A,0xC9,0xD0,0x3B,0x31,0x5B,0xD3,0x3C,0x61,0x47,0xA6,0x3E,0xF4,0xCA,0xE0,0x3C,0x2D,0x8F,0x40,0x3C,0x51,0x20,0xB4,0x3D,0x60,0x57,0x13,0x3F,0x1B,0xDE,0x85,0x3E,0x9E,0x0F,0x44,0x3F,0xC5,0x17,0xF4,0x3E,0x72,0x1D,0x25,0x3F,
	0xC7,0x0A,0xD1,0x3E,0x43,0x1E,0x47,0x3F,0x25,0x32,0x1A,0x3F,0xA6,0x1C,0x43,0x3F,0x4F,0xBA,0xBE,0x3E,0x2E,0xFD,0x74,0x3D,0x64,0x1B,0xAE,0x3D,0xD4,0xEF,0xA2,0x3E,0x7E,0xF7,0xBE,0x3E,0x3D,0x2D,0x65,0x3E,0x12,0x70,0x57,0x3D,0x43,0x93,0xFF,0x3E,0xB3,0xA0,0x56,0x3C,0x3B,0x7D,0xAB,0x3B,0xA8,0x9F,0xF1,0x3C,0x80,0xDD,0x0D,0x3F,0xE0,0x71,0x60,0x3F,0x87,0x10,0x48,0x3F,0x00,0xA3,0x7F,0x3F,0x5B,0xC7,0x44,0x3F,0x90,0x74,0x90,0x3E,0x73,0xA4,0x0B,0x3E,0x94,0x42,0x94,0x3E,0x9B,0x35,0x13,0x3F,0x60,0xBF,0x99,0x3E,0x15,0x18,0x16,0x3C,0xC2,0x77,0xD9,0x3A,0x12,0x33,0x6E,0x3E,0xED,0x77,0x7B,0x3D,0x9A,0xD4,0x0A,0x3D,0x5E,0xDF,0xDD,0x3C,0xCF,0xD3,0xBB,0x3E,0x90,0x3A,0x0E,0x3C,0x6C,0x87,0x0B,0x3C,0x32,0x74,0x35,0x3D,0x06,0x69,0x29,0x3F,0x00,0xB6,0x7F,0x3F,0xD1,0x4D,0x14,0x3F,0x00,0xF3,0x7F,0x3F,0x21,0x13,0x83,0x3B,0xC2,0x37,0x42,0x3F,0xE4,0xD7,0x95,0x3B,0xA9,0x4C,0xA9,0x3E,0x7E,0xD2,0xC7,0x3E,0xAC,0x00,0x2C,0x3A,0x7D,0xED,0xAF,0x3D,0xC8,0x27,0x94,0x3D,0x85,0xB8,0x84,0x3D,0xEF,0x2A,0xFE,0x3B,0x98,0x95,0x4A,0x3D,0x26,0x29,0x86,0x3D,0x45,0x34,0xF2,0x3E,0xFD,0x85,0x6E,0x3E,0x9B,0x1C,0x9B,0x3D,0xC3,0x3C,0xB4,0x3C,0x59,0xD2,0xAF,0x3E,0x6A,0xFA,0xCF,0x3C,0xE8,0x5B,0xB4,0x3D,0x52,0x67,0x6B,0x3C,0xF3,0x16,0x8C,0x3D,0xEC,0x6C,0xD2,0x3D,0x05,0xED,0xB2,0x3B,0x99,0xD2,0x8E,0x3D,0xE6,0xC2,0xF0,0x3E,
	0x82,0x83,0xC9,0x3E,0xB0,0xEB,0x7C,0x3C,0xFB,0x4E,0xFF,0x3D,0xAE,0x38,0x50,0x3F,0x48,0xB9,0x22,0x3E,0xA7,0xB3,0xD5,0x3A,0x03,0x32,0x39,0x3D,0x7A,0x6C,0xD1,0x3E,0x54,0x69,0xC0,0x3B,0xA1,0xC0,0xD1,0x3A,0x0D,0xCF,0x01,0x3C,0x8B,0x2C,0xD2,0x3E,0x53,0x3D,0x86,0x3D,0x97,0xA4,0x96,0x3D,0xCC,0x33,0x98,0x3A,0xBD,0x00,0xBD,0x3B,0x61,0x17,0x01,0x3A,0xC9,0x17,0x49,0x3F,0x54,0xD3,0xCB,0x3E,0x84,0x8E,0xCC,0x3D,0x2D,0xBC,0xCE,0x3E,0x8F,0xC1,0x7C,0x38,0x0D,0xCF,0x81,0x3A,0xF3,0x1C,0x52,0x3F,0x85,0x83,0xCC,0x3E,0x15,0x83,0x4A,0x3C,0xB9,0xDE,0x45,0x3C,0xC0,0x4F,0x51,0x3F,0x85,0xA8,0xC2,0x3B,0x91,0x44,0x6C,0x3E,0x0A,0xFA,0x11,0x3E,0xD5,0x7A,0x1D,0x3F,0xC3,0xEA,0x62,0x3F,0x93,0x99,0x8F,0x3E,0xE0,0x27,0x60,0x3F,0x75,0x4D,0x8B,0x3E,0xE2,0x20,0xE3,0x3E,0xFC,0x4C,0x7C,0x3F,0xFD,0x58,0x7D,0x3F,0xF4,0x42,0x80,0x3E,0x80,0x43,0xC7,0x3E,0x97,0x98,0x66,0x3B,0x3C,0xAE,0xC5,0x3C,0xC2,0xFD,0x51,0x3F,0x17,0xB2,0xCC,0x3E,0x9B,0xCB,0x1E,0x3C,0xC3,0x78,0x82,0x3C,0x14,0xD3,0x51,0x3F,0x34,0x1D,0x62,0x3E,0x50,0xF5,0x70,0x3E,0x81,0x59,0x9E,0x3E,0x0F,0x19,0x89,0x3E
},

/* input data and other run-time fields*/

{0}

}; /* done */
#endif
