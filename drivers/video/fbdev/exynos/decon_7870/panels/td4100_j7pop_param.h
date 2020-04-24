#ifndef __TD4100_PARAM_H__
#define __TD4100_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_MIN_BRIGHTNESS	4
#define UI_DIM_BRIGHTNESS	10
#define UI_DEFAULT_BRIGHTNESS	128
#define LEVEL_IS_HBM(brightness)	(brightness == EXTEND_BRIGHTNESS)

#define TDDI_MIN_BRIGHTNESS 3
#define TDDI_DIM_BRIGHTNESS 8
#define TDDI_DEFAULT_BRIGHTNESS 80
#define TDDI_MAX_BRIGHTNESS 215
#define TDDI_OUTDOOR_BRIGHTNESS 255

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

struct i2c_rom_data {
	u8 addr;
	u8 val;
};

static const struct i2c_rom_data ISL98611_INIT[] = {
	{0x01, 0x00},
	{0x02, 0xBF},
	{0x03, 0x02},
	{0x04, 0x14},
	{0x05, 0x14},
	{0x06, 0xF4},
	{0x10, 0xFF},
	{0x11, 0x07},
	{0x12, 0xBF},
	{0x13, 0x87},
	{0x14, 0xDD},
	{0x16, 0xF5},
	{0x17, 0x8D},
};

static const unsigned char SEQ_TD4100_B0[] = {
	0xB0,
	0x04,
};

static const unsigned char SEQ_TD4100_B3[] = {
	0xB3,
	0x10, 0x00, 0x06
};

static const unsigned char SEQ_TD4100_B6[] = {
	0xB6,
	0x32, 0x43, 0x80, 0x00, 0x00, 0x07, 0x86
};

static const unsigned char SEQ_TD4100_BA[] = {
	0xBA,
	0x07, 0x87, 0x3A, 0x0A, 0x2D, 0x88,
};

static const unsigned char SEQ_TD4100_BB[] = {
	0xBB,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BC[] = {
	0xBC,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BD[] = {
	0xBD,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BE[] = {
	0xBE,
	0x04,
};

static const unsigned char SEQ_TD4100_C0[] = {
	0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_C1[] = {
	0xC1,
	0x04, 0x48, 0x01, 0x00, 0x33, 0x08, 0x11, 0x00, 0x11, 0x00,
	0x73, 0x23, 0x23, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0x00, 0x30, 0x00,
	0x01, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_C2[] = {
	0xC2,
	0x00, 0xF0, 0x05, 0x00, 0x0A, 0x04, 0x08, 0x00, 0x24, 0x19,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
};

static const unsigned char SEQ_TD4100_C3[] = {
	0xC3,
	0x51, 0x15, 0x11, 0x51, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x03, 0x28, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x20, 0x01,
};

static const unsigned char SEQ_TD4100_C4[] = {
	0xC4,
	0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
};

static const unsigned char SEQ_TD4100_C5[] = {
	0xC5,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x2D, 0x41,
};

static const unsigned char SEQ_TD4100_C6[] = {
	0xC6,
	0xC2, 0x14, 0x89, 0x00, 0x00, 0x14, 0x89, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xC2, 0xC2,
};

static const unsigned char SEQ_TD4100_C7[] = {
	0xC7,
	0x00, 0x0A, 0x14, 0x21, 0x2D, 0x37, 0x4F, 0x61, 0x71, 0x7F,
	0x33, 0x40, 0x4E, 0x64, 0x6E, 0x7D, 0x90, 0xA0, 0xB0, 0x00,
	0x0A, 0x14, 0x21, 0x2D, 0x37, 0x4F, 0x61, 0x71, 0x7F, 0x33,
	0x40, 0x4E, 0x64, 0x6E, 0x7D, 0x90, 0xA0, 0xB0, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static const unsigned char SEQ_TD4100_C8[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static const unsigned char SEQ_TD4100_C9[] = {
	0xC9,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00
};

static const unsigned char SEQ_TD4100_CA[] = {
	0xCA,
	0x1D, 0xFC, 0xDC, 0xEE, 0x00, 0xE6, 0xDB, 0xD8, 0x00, 0xC9,
	0xEE, 0xF3, 0x00, 0x08, 0x06, 0x00, 0x00, 0x08, 0xF3, 0x05,
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00
};

static const unsigned char SEQ_TD4100_CC[] = {
	0xCC,
	0x00, 0x00, 0x00, 0x00, 0xD2, 0x72, 0x12, 0x16, 0x1A, 0x1E,
	0xD0, 0x70, 0x42, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x44, 0x40, 0x70, 0xD0, 0x1C, 0x18, 0x14, 0x10, 0x72, 0xD2,
	0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CD[] = {
	0xCD,
	0x1D, 0x05, 0x86, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CE[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x04, 0x00, 0x01,
	0x04, 0x45, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CF[] = {
	0xCF,
	0x48, 0x10,
};


static const unsigned char SEQ_TD4100_D0[] = {
	0xD0,
	0x11, 0x04, 0x59, 0xD9, 0x03, 0x10, 0x10, 0x40, 0x19, 0x08,
	0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_D1[] = {
	0xD1,
	0x04
};

static const unsigned char SEQ_TD4100_D3[] = {
	0xD3,
	0xBB, 0x3B, 0x33, 0x3B, 0x44, 0x3B, 0x44, 0x3B, 0x00, 0x00,
	0xEC, 0x9B, 0x8B, 0x23, 0x22, 0xB3, 0xB3, 0x3B, 0xBB, 0x4F,
	0xD0, 0x3C, 0x10, 0x12, 0x10, 0x00, 0x10,
};

static const unsigned char SEQ_TD4100_D4[] = {
	0xD4,
	0x80, 0x04, 0x04, 0x33, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x90,
	0x05, 0x00, 0x64, 0x94,
};


static const unsigned char SEQ_TD4100_D6_41[] = {
	0xD6,
	0x41,
};

static const unsigned char SEQ_TD4100_D7[] = {
	0xD7,
	0xF6, 0xFF, 0x03, 0x05, 0x43, 0x24, 0x80, 0x1F, 0xC7, 0x1F,
	0x1B, 0x00, 0x0F, 0x01, 0x20, 0x08, 0x80, 0x3F, 0x00, 0x78,
	0x00, 0x40, 0x24, 0x15, 0x00, 0x33, 0x02, 0xC0, 0xAF, 0xCB,
	0x60, 0x30, 0xFC, 0x00, 0x3F, 0x00,
};

static const unsigned char SEQ_TD4100_D8[] = {
	0xD8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_DD[] = {
	0xDD,
	0x30, 0x06, 0x23, 0x65,
};

static const unsigned char SEQ_TD4100_BL[] = {
	0x51,
	0x00,
};

static const unsigned char SEQ_TD4100_53[] = {
	0x53,
	0x0C,
};
static const unsigned char SEQ_TD4100_55[] = {
	0x55,
	0x00,
};

static const unsigned char SEQ_CABC_MIN[] = {
	0x5E,
	0x30,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

const const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

const const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};
static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};


#endif /* __TD4100_PARAM_H__ */
