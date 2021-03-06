//*****************************************************************************
//*****************************************************************************
//  FILENAME: SleepTimer_1.h
//   Version: 1.0, Updated on 2013/5/19 at 10:44:14
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: SleepTimer User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef SleepTimer_1_INCLUDE
#define SleepTimer_1_INCLUDE

#include <m8c.h>
#define SleepTimer_1_TICK_CNTR_SIZE           2

#pragma fastcall16 SleepTimer_1_EnableInt                 //                 Proxy 1
#pragma fastcall16 SleepTimer_1_DisableInt                //                 Proxy 1
#pragma fastcall16 SleepTimer_1_Start                     //                 Proxy 1
#pragma fastcall16 SleepTimer_1_Stop                      //                 Proxy 1
#pragma fastcall16 SleepTimer_1_SetInterval               //                 Proxy 1
#pragma fastcall16 SleepTimer_1_SetTimer
#pragma fastcall16 SleepTimer_1_bGetTimer

#pragma fastcall16 SleepTimer_1_SyncWait                  //                 Proxy 1
#pragma fastcall16 SleepTimer_1_TickWait                  //                 Proxy 1

#pragma fastcall16 SleepTimer_1_bGetTickCntr              //                 Proxy 2


#if ( SleepTimer_1_TICK_CNTR_SIZE & (4|2) )
#pragma fastcall16 SleepTimer_1_iGetTickCntr              //                 Proxy 4
#endif

#if ( SleepTimer_1_TICK_CNTR_SIZE & 4 )
#pragma fastcall16 SleepTimer_1_lGetTickCntr              //                 Proxy 4
#endif

//-------------------------------------------------
// Prototypes of the SleepTimer_1 API.
//-------------------------------------------------

extern void SleepTimer_1_EnableInt(void);
extern void SleepTimer_1_DisableInt(void);
extern void SleepTimer_1_Start(void);
extern void SleepTimer_1_Stop(void);
extern void SleepTimer_1_SetInterval(BYTE bInterval);
extern void SleepTimer_1_SyncWait(BYTE bTicks, BYTE bMode);
extern void SleepTimer_1_TickWait(BYTE bTicks);
extern void SleepTimer_1_SetTimer(BYTE bNewTimerValue);
extern BYTE SleepTimer_1_bGetTimer( void );

extern BYTE SleepTimer_1_bGetTickCntr(void);

#if ( SleepTimer_1_TICK_CNTR_SIZE & (4|2) )
extern unsigned int  SleepTimer_1_iGetTickCntr(void);
#define ST_INT_VALID
#endif

#if ( SleepTimer_1_TICK_CNTR_SIZE & 4 )
extern unsigned long * SleepTimer_1_lGetTickCntr(unsigned long * lptr);
#define ST_LONG_VALID
#endif

// Frequency of sleep timer interrupts
#define SleepTimer_1_1_HZ                    0x18
#define SleepTimer_1_8_HZ                    0x10
#define SleepTimer_1_64_HZ                   0x08
#define SleepTimer_1_512_HZ                  0x00

#define SleepTimer_1_FORCE_RELOAD            0x01
#define SleepTimer_1_WAIT_RELOAD             0x00
extern BYTE SleepTimer_1_fTick;


#endif
// end of file SleepTimer_1.h
