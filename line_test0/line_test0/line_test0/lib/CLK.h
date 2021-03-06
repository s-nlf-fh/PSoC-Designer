//*****************************************************************************
//*****************************************************************************
//  FILENAME: CLK.h
//   Version: 1.40, Updated on 2013/5/19 at 10:43:48                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: CLK User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef CLK_INCLUDE
#define CLK_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  CLK_Stop
#pragma fastcall16  CLK_Start
#pragma fastcall16  CLK_On
#pragma fastcall16  CLK_Off
#pragma fastcall16  CLK_Switch
#pragma fastcall16  CLK_Invert
#pragma fastcall16  CLK_GetState


//-------------------------------------------------
// Constants for CLK API's.
//-------------------------------------------------
//
#define  CLK_ON   1
#define  CLK_OFF  0

//-------------------------------------------------
// Prototypes of the CLK API.
//-------------------------------------------------
extern void  CLK_Start(void);                                     
extern void  CLK_Stop(void);                                      
extern void  CLK_On(void);                                      
extern void  CLK_Off(void);                                      
extern void  CLK_Switch(BYTE bSwitch);
extern void  CLK_Invert(void);                                         
extern BYTE  CLK_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
