
#ifndef L6470_H
#define L6470_H

enum L6470_Register
{
	L6470_ABS_POS = 1,
	L6470_EL_POS = 2,
	L6470_MARK = 3,
	L6470_SPEED = 4,
	L6470_ACC = 5,
	L6470_DEC = 6,
	L6470_MAX_SPEED = 7,
	L6470_MIN_SPEED = 8,
	L6470_INT_SPEED = 13,
	L6470_ST_SLP = 14,
	L6470_FN_SLP_ACC = 15,
	L6470_FN_SLP_DEC = 16,
	L6470_K_THERM = 17,
	L6470_ADC_OUT = 18,
	L6470_OCD_TH = 19,
	L6470_STALL_TH = 20,
	L6470_FS_SPD = 21,
	L6470_STEP_MODE = 22,
	L6470_ALARM_EN = 23,
	L6470_CONFIG = 24,
	L6470_STATUS = 25,
};

enum L6470_KVAL_Reg
{
	L6470_KVAL_HOLD = 9,
	L6470_KVAL_RUN = 10,
	L6470_KVAL_ACC = 11,
	L6470_KVAL_DEC = 12,
};

enum L6470_Step_Mode
{
	FULL_STEP,
	HALF_STEP,
	MICRO_STEP_4,
	MICRO_STEP_8,
	MICRO_STEP_16,
	MICRO_STEP_32,
	MICRO_STEP_64,
	MICRO_STEP_128,
};

BYTE SPI_transceiver(BYTE);
void L6470_SetKVAL(enum L6470_KVAL_Reg, BYTE);
void L6470_SetStepMode(enum L6470_Step_Mode);
void L6470_Run(LONG);
void L64570_ResetDevice(void);
void L64570_SoftStop(void);
void L64570_HardStop(void);
void L6470_SoftHiZ(void);
void L6470_HardHiZ(void);

#endif //L6470_H
