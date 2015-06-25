#ifndef __S6E3HF2_WQHD_PARAM_H__
#define __S6E3HF2_WQHD_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>


struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

#define POWER_IS_ON(pwr)			(pwr <= FB_BLANK_NORMAL)
#define LEVEL_IS_HBM(level)			(level >= 6)
#define UNDER_MINUS_20(temperature)	(temperature <= -20)
#define UNDER_0(temperature)	(temperature <= 0)


#define ACL_IS_ON(nit) 				(nit < 360)
#define CAPS_IS_ON(nit)				(nit >= 41)

#define NORMAL_TEMPERATURE			25	/* 25 degrees Celsius */
#define UI_MAX_BRIGHTNESS 	255
#define UI_MIN_BRIGHTNESS 	0
#define UI_DEFAULT_BRIGHTNESS 134

#define S6E3HF2_MTP_ADDR 			0xC8
#define S6E3HF2_MTP_SIZE 			35
#define S6E3HF2_MTP_DATE_SIZE 		S6E3HF2_MTP_SIZE + 9
#define S6E3HF2_COORDINATE_REG		0xA1
#define S6E3HF2_COORDINATE_LEN		4
#define S6E3HF2_HBMGAMMA_REG		0xB4
#define S6E3HF2_HBMGAMMA_LEN		31



#define S6E3HF2_ID_REG				0x04
#define S6E3HF2_ID_LEN				3
#define S6E3HF2_CODE_REG			0xD6
#define S6E3HF2_CODE_LEN			5
#define TSET_REG			0xB8 /* TSET: Global para 8th */
#define TSET_LEN			9
#define TSET_MINUS_OFFSET			0x03
#define ELVSS_REG			0xB6
#define ELVSS_LEN			23   /* elvss: Global para 22th */
#define VINT_REG					0xF4
#define VINT_LEN					3

#define GAMMA_CMD_CNT 		36
#define AID_CMD_CNT			3
#define ELVSS_CMD_CNT		3


#define S6E3HF2_WQXGA_ID1 		0x404013
#define S6E3HF2_WQXGA_ID2 		0x404014


#define S6E3HF2_HBM_ELVSS_INDEX		21
#define S6E3HF2_HBM_ELVSS_COMP		0x06
#define S6E3HF2_A2_LINE_ID		0x40
#define S6E3HF2_A3_LINE_ID		0x80
#define S6E3HF2_RDDPM_ADDR		0x0A
#define S6E3HF2_RDDSM_ADDR		0x0E
#define S6E3HF2_LCDTYPE_WQHD	0
#define S6E3HF2_LCDTYPE_WQXGA	1

#define S6E3HF2_MAX_BRIGHTNESS	360
#define S6E3HF2_HBM_BRIGHTNESS	600

static const unsigned int VINT_DIM_TABLE[] = {
	5,	6,	7,	8,	9,
	10,	11,	12,	13,	14
};

static const unsigned char VINT_TABLE[] = {
	0x18, 0x19, 0x1A, 0x1B, 0x1C,
	0x1D, 0x1E, 0x1F, 0x20, 0x21
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_F1[] = {
	0xF1,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A
};

static const unsigned char SEQ_TEST_KEY_OFF_FC[] = {
	0xFC,
	0xA5, 0xA5
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28
};

static const unsigned char SEQ_SINGLE_DSI_1[] = {
	0xF2,
	0x67
};

static const unsigned char SEQ_SINGLE_DSI_2[] = {
	0xF9,
	0x29
};

static const unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x00, 0x00, 0x00,
	0x00, 0x00
};

static const unsigned char SEQ_AOR_CONTROL[] = {
	0xB2,
	0x03, 0x10
};

static const unsigned char SEQ_ELVSS_SET[] = {
	0xB6,
	0x9C,	/* MPS_CON: ACL OFF */
	0x0A	/* ELVSS: MAX*/
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7,
	0x03
};

static const unsigned char SEQ_GAMMA_UPDATE_L[] = {
	0xF7,
	0x00,
};

static const unsigned char SEQ_TSET_GLOBAL[] = {
	0xB0,
	0x07
};

static const unsigned char SEQ_TSET[] = {
	0xB8,
	0x19
};

static const unsigned char SEQ_TE_ON[] = {
	0x35
};
static const unsigned char SEQ_TE_OFF[] = {
	0x34,
};

static const unsigned char SEQ_TSP_TE[] = {
	0xBD,
	0x11, 0x11, 0x02, 0x16, 0x02, 0x16
};

static const unsigned char SEQ_PENTILE_SETTING[] = {
	0xC0,
	0x00, 0x00, 0xD8, 0xD8
};

static const unsigned char SEQ_POC_SETTING1[] = {
<<<<<<< HEAD
=======
	0xC3,
	0xC0, 0x00, 0x33
};

static const unsigned char SEQ_POC_SETTING2[] = {
>>>>>>> 3926c5c... Push COF6 G920T source
	0xB0,
	0x20
};

<<<<<<< HEAD
static const unsigned char SEQ_POC_SETTING2[] = {
=======
static const unsigned char SEQ_POC_SETTING3[] = {
>>>>>>> 3926c5c... Push COF6 G920T source
	0xFE,
	0x04
};

static const unsigned char SEQ_PCD_SETTING[] = {
	0xCC,
	0x40, 0x51
};

static const unsigned char SEQ_ERR_FG_SETTING[] = {
	0xED,
	0x44
};

static const unsigned char SEQ_TE_START_SETTING[] = {
	0xB9,
	0x10, 0x09, 0xFF, 0x00, 0x09
};

static const unsigned char SEQ_HBM_OFF[] = {
	0x53,
	0x00
};

static const unsigned char SEQ_HBM_ON[] = {
	0x53,
	0xC0
};
static const unsigned char SEQ_ACL_OFF[] = {
	0x55,
	0x00
};

static const unsigned char SEQ_ACL_8[] = {
	0x55,
	0x02,
};

static const unsigned char SEQ_ACL_OFF_OPR_AVR[] = {
	0xB5,
	0x40
};

static const unsigned char SEQ_ACL_ON_OPR_AVR[] = {
	0xB5,
	0x50
};

static const unsigned char SEQ_WQXGA_PARTIAL_UPDATE[] = {
	0x2A,
	0x00, 0x00, 0x05, 0x9F,
};

enum {
	HBM_STATUS_OFF,
	HBM_STATUS_ON,
	HBM_STATUS_MAX,
};

enum {
	ACL_STATUS_0P,
	ACL_STATUS_8P,
	ACL_STATUS_MAX
};

enum {
	ACL_OPR_16_FRAME,
	ACL_OPR_32_FRAME,
	ACL_OPR_MAX
};


#if defined(CONFIG_SEC_FACTORY) && defined(CONFIG_EXYNOS_DECON_LCD_MCD)

static const unsigned char SEQ_MCD_ON_SET1[][2] = {
	{0xF4, 0x84},
	{0xB0, 0x04}, {0xCB, 0xB4}, {0xB0, 0x08}, {0xCB, 0xE3},
	{0xB0, 0x09}, {0xCB, 0x02}, {0xB0, 0x11}, {0xCB, 0x00},
	{0xB0, 0x12}, {0xCB, 0x1A}, {0xB0, 0x13}, {0xCB, 0xC0},
	{0xB0, 0x14}, {0xCB, 0x1A}, {0xB0, 0x1F}, {0xCB, 0x03},
	{0xB0, 0x20}, {0xCB, 0x22}, {0xB0, 0x21}, {0xCB, 0x3D},
	{0xB0, 0x22}, {0xCB, 0xA2}, {0xB0, 0x23}, {0xCB, 0xD2},
	{0xB0, 0x27}, {0xCB, 0x44}, {0xB0, 0x28}, {0xCB, 0x45},
	{0xB0, 0x33}, {0xCB, 0xD2}, {0xB0, 0x37}, {0xCB, 0x04},
	{0xB0, 0x38}, {0xCB, 0x05}, {0xB0, 0x45}, {0xCB, 0x00},
	{0xB0, 0x05}, {0xF6, 0x3A}
};

static const unsigned char SEQ_MCD_ON_SET2[][2] = {
	{0xB0, 0x03}, {0xBB, 0x30}
};

static const unsigned char SEQ_MCD_OFF_SET1[][2] = {
	{0xB0, 0x04}, {0xCB, 0xF4}, {0xB0, 0x08}, {0xCB, 0xE1},
	{0xB0, 0x09}, {0xCB, 0x06}, {0xB0, 0x11}, {0xCB, 0x15},
	{0xB0, 0x12}, {0xCB, 0x99}, {0xB0, 0x13}, {0xCB, 0x00},
	{0xB0, 0x14}, {0xCB, 0x00}, {0xB0, 0x1F}, {0xCB, 0x12},
	{0xB0, 0x20}, {0xCB, 0xCE}, {0xB0, 0x21}, {0xCB, 0x00},
	{0xB0, 0x22}, {0xCB, 0x00}, {0xB0, 0x23}, {0xCB, 0xD1},
	{0xB0, 0x27}, {0xCB, 0x42}, {0xB0, 0x28}, {0xCB, 0x43},
	{0xB0, 0x33}, {0xCB, 0xD1}, {0xB0, 0x37}, {0xCB, 0x02},
	{0xB0, 0x38}, {0xCB, 0x03}, {0xB0, 0x45}, {0xCB, 0x06},
	{0xB0, 0x05}, {0xF6, 0x59}
};

static const unsigned char SEQ_MCD_OFF_SET2[][2] = {
	{0xB0, 0x03}, {0xBB, 0x00}, {0xF4, 0x8B}
};

#endif

#ifdef CONFIG_LCD_HMT
#define DEFAULT_HMT_BRIGHTNESS			162
#define	HMT_OFF							0
#define HMT_ON							1

static const unsigned char SEQ_HMT_ON1[] = {	/* aid */
	0xB2,
	0x03, 0x13, 0x04, 0x10, 0x10, 0x00
};
static const unsigned char SEQ_HMT_ON2[] = {		/* porch */
	0xF3,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10
};
static const unsigned char SEQ_HMT_ON3[] = {		/* PASET Setting  */
	0x2B,
	0x00, 0x00, 0x09, 0xFF
};


static const unsigned char SEQ_HMT_OFF1[] = {	/* aid */
	0xB2,
	0xA5, 0x30, 0x04, 0x10, 0x10, 0x40
};

static const unsigned char SEQ_HMT_AID_FORWARD1[] = {	/* G.Param */
	0xF2,
	0x67, 0x41, 0xC5, 0x0A, 0x06
};
static const unsigned char SEQ_HMT_AID_FORWARD2[] = {	/* G.Param */
	0xCB,
	0x18, 0x31, 0x81, 0x01, 0xF4, 0x26, 0x46, 0x00,
	0xE1, 0x06, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x15, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12,
	0xCE, 0x00, 0x00, 0xD1, 0x0D, 0x0F, 0x0B, 0x42,
	0x43, 0xC0, 0x11, 0x11, 0xD1, 0xD1, 0xD1, 0xD1,
	0xD1, 0x51, 0xD1, 0xD1, 0xCD, 0x0F, 0x0B
};

static const unsigned char SEQ_HMT_AID_REVERSE1[] = {	/* G.Param */
	0xF2,
	0x67, 0x41, 0xC5, 0x0E, 0x02
};

static const unsigned char SEQ_HMT_AID_REVERSE2[] = {	/* G.Param */
	0xCB,
	0x18, 0x31, 0x81, 0x01, 0xF0, 0x26, 0x46, 0x00,
	0xE1, 0x02, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x15, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x12,
	0xCE, 0x00, 0x00, 0xD1, 0x0D, 0x0F, 0x0C, 0x42,
	0x43, 0xC0, 0x11, 0x11, 0xD1, 0xD1, 0xD1, 0xD1,
	0xD1, 0x51, 0xD1, 0xD1, 0xCD, 0x0F, 0x0C
};


#endif

#ifdef CONFIG_LCD_ALPM
static const unsigned char SEQ_ALPM2NIT_MODE_ON[] = {
	0x53, 0x23
};

static const unsigned char SEQ_NORMAL_MODE_ON[] = {
	0x53, 0x00
};

static const unsigned char SEQ_GLOBAL_PARAM_21[] = {
	0xB0,
	0x15
};
#endif


enum {
	HBM_INTER_OFF = 0,
	HBM_COLORBLIND_ON,
	HBM_GALLERY_ON,
};

// 384 ~ 550
static const char HBM_INTER_22TH_OFFSET[] = {
	0x02, 0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06
};

#endif /* __S6E3HF2_PARAM_H__ */
