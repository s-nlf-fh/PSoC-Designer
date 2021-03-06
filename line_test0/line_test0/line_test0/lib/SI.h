//*****************************************************************************
//*****************************************************************************
//  FILENAME: SI.h
//   Version: 1.40, Updated on 2013/5/19 at 10:43:48                                          
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: SI User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef SI_INCLUDE
#define SI_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  SI_Stop
#pragma fastcall16  SI_Start
#pragma fastcall16  SI_On
#pragma fastcall16  SI_Off
#pragma fastcall16  SI_Switch
#pragma fastcall16  SI_Invert
#pragma fastcall16  SI_GetState


//-------------------------------------------------
// Constants for SI API's.
//-------------------------------------------------
//
#define  SI_ON   1
#define  SI_OFF  0

//-------------------------------------------------
// Prototypes of the SI API.
//-------------------------------------------------
extern void  SI_Start(void);                                     
extern void  SI_Stop(void);                                      
extern void  SI_On(void);                                      
extern void  SI_Off(void);                                      
extern void  SI_Switch(BYTE bSwitch);
extern void  SI_Invert(void);                                         
extern BYTE  SI_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
