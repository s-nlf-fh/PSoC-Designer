;  Generated by PSoC Designer 5.4.2946
;
; LCD_1D4 address and mask equates
LCD_1D4_Data_ADDR:	equ	0h
LCD_1D4_DriveMode_0_ADDR:	equ	100h
LCD_1D4_DriveMode_1_ADDR:	equ	101h
LCD_1D4_DriveMode_2_ADDR:	equ	3h
LCD_1D4_GlobalSelect_ADDR:	equ	2h
LCD_1D4_IntCtrl_0_ADDR:	equ	102h
LCD_1D4_IntCtrl_1_ADDR:	equ	103h
LCD_1D4_IntEn_ADDR:	equ	1h
LCD_1D4_MASK:	equ	1h
; LCD_1D4_Data access macros
;   GetLCD_1D4_Data macro, return in a
macro GetLCD_1D4_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 1h
endm
;   SetLCD_1D4_Data macro
macro SetLCD_1D4_Data
	or		[Port_0_Data_SHADE], 1h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm
;   ClearLCD_1D4_Data macro
macro ClearLCD_1D4_Data
	and		[Port_0_Data_SHADE], ~1h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm

; LCD_1D4_DriveMode_0 access macros
;   GetLCD_1D4_DriveMode_0 macro, return in a
macro GetLCD_1D4_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 1h
endm
;   SetLCD_1D4_DriveMode_0 macro
macro SetLCD_1D4_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 1h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm
;   ClearLCD_1D4_DriveMode_0 macro
macro ClearLCD_1D4_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~1h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm

; LCD_1D4_DriveMode_1 access macros
;   GetLCD_1D4_DriveMode_1 macro, return in a
macro GetLCD_1D4_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 1h
endm
;   SetLCD_1D4_DriveMode_1 macro
macro SetLCD_1D4_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 1h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm
;   ClearLCD_1D4_DriveMode_1 macro
macro ClearLCD_1D4_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~1h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D4_Data_ADDR], a
endm

; LCD_1D5 address and mask equates
LCD_1D5_Data_ADDR:	equ	0h
LCD_1D5_DriveMode_0_ADDR:	equ	100h
LCD_1D5_DriveMode_1_ADDR:	equ	101h
LCD_1D5_DriveMode_2_ADDR:	equ	3h
LCD_1D5_GlobalSelect_ADDR:	equ	2h
LCD_1D5_IntCtrl_0_ADDR:	equ	102h
LCD_1D5_IntCtrl_1_ADDR:	equ	103h
LCD_1D5_IntEn_ADDR:	equ	1h
LCD_1D5_MASK:	equ	2h
; LCD_1D5_Data access macros
;   GetLCD_1D5_Data macro, return in a
macro GetLCD_1D5_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 2h
endm
;   SetLCD_1D5_Data macro
macro SetLCD_1D5_Data
	or		[Port_0_Data_SHADE], 2h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm
;   ClearLCD_1D5_Data macro
macro ClearLCD_1D5_Data
	and		[Port_0_Data_SHADE], ~2h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm

; LCD_1D5_DriveMode_0 access macros
;   GetLCD_1D5_DriveMode_0 macro, return in a
macro GetLCD_1D5_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 2h
endm
;   SetLCD_1D5_DriveMode_0 macro
macro SetLCD_1D5_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 2h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm
;   ClearLCD_1D5_DriveMode_0 macro
macro ClearLCD_1D5_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~2h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm

; LCD_1D5_DriveMode_1 access macros
;   GetLCD_1D5_DriveMode_1 macro, return in a
macro GetLCD_1D5_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 2h
endm
;   SetLCD_1D5_DriveMode_1 macro
macro SetLCD_1D5_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 2h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm
;   ClearLCD_1D5_DriveMode_1 macro
macro ClearLCD_1D5_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~2h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D5_Data_ADDR], a
endm

; LCD_1D6 address and mask equates
LCD_1D6_Data_ADDR:	equ	0h
LCD_1D6_DriveMode_0_ADDR:	equ	100h
LCD_1D6_DriveMode_1_ADDR:	equ	101h
LCD_1D6_DriveMode_2_ADDR:	equ	3h
LCD_1D6_GlobalSelect_ADDR:	equ	2h
LCD_1D6_IntCtrl_0_ADDR:	equ	102h
LCD_1D6_IntCtrl_1_ADDR:	equ	103h
LCD_1D6_IntEn_ADDR:	equ	1h
LCD_1D6_MASK:	equ	4h
; LCD_1D6_Data access macros
;   GetLCD_1D6_Data macro, return in a
macro GetLCD_1D6_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 4h
endm
;   SetLCD_1D6_Data macro
macro SetLCD_1D6_Data
	or		[Port_0_Data_SHADE], 4h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm
;   ClearLCD_1D6_Data macro
macro ClearLCD_1D6_Data
	and		[Port_0_Data_SHADE], ~4h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm

; LCD_1D6_DriveMode_0 access macros
;   GetLCD_1D6_DriveMode_0 macro, return in a
macro GetLCD_1D6_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 4h
endm
;   SetLCD_1D6_DriveMode_0 macro
macro SetLCD_1D6_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 4h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm
;   ClearLCD_1D6_DriveMode_0 macro
macro ClearLCD_1D6_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~4h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm

; LCD_1D6_DriveMode_1 access macros
;   GetLCD_1D6_DriveMode_1 macro, return in a
macro GetLCD_1D6_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 4h
endm
;   SetLCD_1D6_DriveMode_1 macro
macro SetLCD_1D6_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 4h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm
;   ClearLCD_1D6_DriveMode_1 macro
macro ClearLCD_1D6_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~4h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D6_Data_ADDR], a
endm

; LCD_1D7 address and mask equates
LCD_1D7_Data_ADDR:	equ	0h
LCD_1D7_DriveMode_0_ADDR:	equ	100h
LCD_1D7_DriveMode_1_ADDR:	equ	101h
LCD_1D7_DriveMode_2_ADDR:	equ	3h
LCD_1D7_GlobalSelect_ADDR:	equ	2h
LCD_1D7_IntCtrl_0_ADDR:	equ	102h
LCD_1D7_IntCtrl_1_ADDR:	equ	103h
LCD_1D7_IntEn_ADDR:	equ	1h
LCD_1D7_MASK:	equ	8h
; LCD_1D7_Data access macros
;   GetLCD_1D7_Data macro, return in a
macro GetLCD_1D7_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 8h
endm
;   SetLCD_1D7_Data macro
macro SetLCD_1D7_Data
	or		[Port_0_Data_SHADE], 8h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm
;   ClearLCD_1D7_Data macro
macro ClearLCD_1D7_Data
	and		[Port_0_Data_SHADE], ~8h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm

; LCD_1D7_DriveMode_0 access macros
;   GetLCD_1D7_DriveMode_0 macro, return in a
macro GetLCD_1D7_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 8h
endm
;   SetLCD_1D7_DriveMode_0 macro
macro SetLCD_1D7_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 8h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm
;   ClearLCD_1D7_DriveMode_0 macro
macro ClearLCD_1D7_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~8h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm

; LCD_1D7_DriveMode_1 access macros
;   GetLCD_1D7_DriveMode_1 macro, return in a
macro GetLCD_1D7_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 8h
endm
;   SetLCD_1D7_DriveMode_1 macro
macro SetLCD_1D7_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 8h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm
;   ClearLCD_1D7_DriveMode_1 macro
macro ClearLCD_1D7_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~8h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1D7_Data_ADDR], a
endm

; LCD_1E address and mask equates
LCD_1E_Data_ADDR:	equ	0h
LCD_1E_DriveMode_0_ADDR:	equ	100h
LCD_1E_DriveMode_1_ADDR:	equ	101h
LCD_1E_DriveMode_2_ADDR:	equ	3h
LCD_1E_GlobalSelect_ADDR:	equ	2h
LCD_1E_IntCtrl_0_ADDR:	equ	102h
LCD_1E_IntCtrl_1_ADDR:	equ	103h
LCD_1E_IntEn_ADDR:	equ	1h
LCD_1E_MASK:	equ	10h
; LCD_1E_Data access macros
;   GetLCD_1E_Data macro, return in a
macro GetLCD_1E_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 10h
endm
;   SetLCD_1E_Data macro
macro SetLCD_1E_Data
	or		[Port_0_Data_SHADE], 10h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm
;   ClearLCD_1E_Data macro
macro ClearLCD_1E_Data
	and		[Port_0_Data_SHADE], ~10h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm

; LCD_1E_DriveMode_0 access macros
;   GetLCD_1E_DriveMode_0 macro, return in a
macro GetLCD_1E_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 10h
endm
;   SetLCD_1E_DriveMode_0 macro
macro SetLCD_1E_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 10h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm
;   ClearLCD_1E_DriveMode_0 macro
macro ClearLCD_1E_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~10h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm

; LCD_1E_DriveMode_1 access macros
;   GetLCD_1E_DriveMode_1 macro, return in a
macro GetLCD_1E_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 10h
endm
;   SetLCD_1E_DriveMode_1 macro
macro SetLCD_1E_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 10h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm
;   ClearLCD_1E_DriveMode_1 macro
macro ClearLCD_1E_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~10h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1E_Data_ADDR], a
endm

; LCD_1RS address and mask equates
LCD_1RS_Data_ADDR:	equ	0h
LCD_1RS_DriveMode_0_ADDR:	equ	100h
LCD_1RS_DriveMode_1_ADDR:	equ	101h
LCD_1RS_DriveMode_2_ADDR:	equ	3h
LCD_1RS_GlobalSelect_ADDR:	equ	2h
LCD_1RS_IntCtrl_0_ADDR:	equ	102h
LCD_1RS_IntCtrl_1_ADDR:	equ	103h
LCD_1RS_IntEn_ADDR:	equ	1h
LCD_1RS_MASK:	equ	20h
; LCD_1RS_Data access macros
;   GetLCD_1RS_Data macro, return in a
macro GetLCD_1RS_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 20h
endm
;   SetLCD_1RS_Data macro
macro SetLCD_1RS_Data
	or		[Port_0_Data_SHADE], 20h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm
;   ClearLCD_1RS_Data macro
macro ClearLCD_1RS_Data
	and		[Port_0_Data_SHADE], ~20h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm

; LCD_1RS_DriveMode_0 access macros
;   GetLCD_1RS_DriveMode_0 macro, return in a
macro GetLCD_1RS_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 20h
endm
;   SetLCD_1RS_DriveMode_0 macro
macro SetLCD_1RS_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 20h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm
;   ClearLCD_1RS_DriveMode_0 macro
macro ClearLCD_1RS_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~20h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm

; LCD_1RS_DriveMode_1 access macros
;   GetLCD_1RS_DriveMode_1 macro, return in a
macro GetLCD_1RS_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 20h
endm
;   SetLCD_1RS_DriveMode_1 macro
macro SetLCD_1RS_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 20h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm
;   ClearLCD_1RS_DriveMode_1 macro
macro ClearLCD_1RS_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~20h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1RS_Data_ADDR], a
endm

; LCD_1RW address and mask equates
LCD_1RW_Data_ADDR:	equ	0h
LCD_1RW_DriveMode_0_ADDR:	equ	100h
LCD_1RW_DriveMode_1_ADDR:	equ	101h
LCD_1RW_DriveMode_2_ADDR:	equ	3h
LCD_1RW_GlobalSelect_ADDR:	equ	2h
LCD_1RW_IntCtrl_0_ADDR:	equ	102h
LCD_1RW_IntCtrl_1_ADDR:	equ	103h
LCD_1RW_IntEn_ADDR:	equ	1h
LCD_1RW_MASK:	equ	40h
; LCD_1RW_Data access macros
;   GetLCD_1RW_Data macro, return in a
macro GetLCD_1RW_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 40h
endm
;   SetLCD_1RW_Data macro
macro SetLCD_1RW_Data
	or		[Port_0_Data_SHADE], 40h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm
;   ClearLCD_1RW_Data macro
macro ClearLCD_1RW_Data
	and		[Port_0_Data_SHADE], ~40h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm

; LCD_1RW_DriveMode_0 access macros
;   GetLCD_1RW_DriveMode_0 macro, return in a
macro GetLCD_1RW_DriveMode_0
	mov		a,[Port_0_DriveMode_0_SHADE]
	and		a, 40h
endm
;   SetLCD_1RW_DriveMode_0 macro
macro SetLCD_1RW_DriveMode_0
	or		[Port_0_DriveMode_0_SHADE], 40h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm
;   ClearLCD_1RW_DriveMode_0 macro
macro ClearLCD_1RW_DriveMode_0
	and		[Port_0_DriveMode_0_SHADE], ~40h
	mov		a, [Port_0_DriveMode_0_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm

; LCD_1RW_DriveMode_1 access macros
;   GetLCD_1RW_DriveMode_1 macro, return in a
macro GetLCD_1RW_DriveMode_1
	mov		a,[Port_0_DriveMode_1_SHADE]
	and		a, 40h
endm
;   SetLCD_1RW_DriveMode_1 macro
macro SetLCD_1RW_DriveMode_1
	or		[Port_0_DriveMode_1_SHADE], 40h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm
;   ClearLCD_1RW_DriveMode_1 macro
macro ClearLCD_1RW_DriveMode_1
	and		[Port_0_DriveMode_1_SHADE], ~40h
	mov		a, [Port_0_DriveMode_1_SHADE]
	mov		reg[LCD_1RW_Data_ADDR], a
endm

; Xtal_Out address and mask equates
Xtal_Out_Data_ADDR:	equ	4h
Xtal_Out_DriveMode_0_ADDR:	equ	104h
Xtal_Out_DriveMode_1_ADDR:	equ	105h
Xtal_Out_DriveMode_2_ADDR:	equ	7h
Xtal_Out_GlobalSelect_ADDR:	equ	6h
Xtal_Out_IntCtrl_0_ADDR:	equ	106h
Xtal_Out_IntCtrl_1_ADDR:	equ	107h
Xtal_Out_IntEn_ADDR:	equ	5h
Xtal_Out_MASK:	equ	1h
; Xtal_In address and mask equates
Xtal_In_Data_ADDR:	equ	4h
Xtal_In_DriveMode_0_ADDR:	equ	104h
Xtal_In_DriveMode_1_ADDR:	equ	105h
Xtal_In_DriveMode_2_ADDR:	equ	7h
Xtal_In_GlobalSelect_ADDR:	equ	6h
Xtal_In_IntCtrl_0_ADDR:	equ	106h
Xtal_In_IntCtrl_1_ADDR:	equ	107h
Xtal_In_IntEn_ADDR:	equ	5h
Xtal_In_MASK:	equ	2h
; MISO address and mask equates
MISO_Data_ADDR:	equ	8h
MISO_DriveMode_0_ADDR:	equ	108h
MISO_DriveMode_1_ADDR:	equ	109h
MISO_DriveMode_2_ADDR:	equ	bh
MISO_GlobalSelect_ADDR:	equ	ah
MISO_IntCtrl_0_ADDR:	equ	10ah
MISO_IntCtrl_1_ADDR:	equ	10bh
MISO_IntEn_ADDR:	equ	9h
MISO_MASK:	equ	1h
; MISO_Data access macros
;   GetMISO_Data macro, return in a
macro GetMISO_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 1h
endm
;   SetMISO_Data macro
macro SetMISO_Data
	or		[Port_2_Data_SHADE], 1h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[MISO_Data_ADDR], a
endm
;   ClearMISO_Data macro
macro ClearMISO_Data
	and		[Port_2_Data_SHADE], ~1h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[MISO_Data_ADDR], a
endm

; MOSI address and mask equates
MOSI_Data_ADDR:	equ	8h
MOSI_DriveMode_0_ADDR:	equ	108h
MOSI_DriveMode_1_ADDR:	equ	109h
MOSI_DriveMode_2_ADDR:	equ	bh
MOSI_GlobalSelect_ADDR:	equ	ah
MOSI_IntCtrl_0_ADDR:	equ	10ah
MOSI_IntCtrl_1_ADDR:	equ	10bh
MOSI_IntEn_ADDR:	equ	9h
MOSI_MASK:	equ	2h
; MOSI_Data access macros
;   GetMOSI_Data macro, return in a
macro GetMOSI_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 2h
endm
;   SetMOSI_Data macro
macro SetMOSI_Data
	or		[Port_2_Data_SHADE], 2h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[MOSI_Data_ADDR], a
endm
;   ClearMOSI_Data macro
macro ClearMOSI_Data
	and		[Port_2_Data_SHADE], ~2h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[MOSI_Data_ADDR], a
endm

; CLK address and mask equates
CLK_Data_ADDR:	equ	8h
CLK_DriveMode_0_ADDR:	equ	108h
CLK_DriveMode_1_ADDR:	equ	109h
CLK_DriveMode_2_ADDR:	equ	bh
CLK_GlobalSelect_ADDR:	equ	ah
CLK_IntCtrl_0_ADDR:	equ	10ah
CLK_IntCtrl_1_ADDR:	equ	10bh
CLK_IntEn_ADDR:	equ	9h
CLK_MASK:	equ	4h
; CLK_Data access macros
;   GetCLK_Data macro, return in a
macro GetCLK_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 4h
endm
;   SetCLK_Data macro
macro SetCLK_Data
	or		[Port_2_Data_SHADE], 4h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[CLK_Data_ADDR], a
endm
;   ClearCLK_Data macro
macro ClearCLK_Data
	and		[Port_2_Data_SHADE], ~4h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[CLK_Data_ADDR], a
endm

; CSPin address and mask equates
CSPin_Data_ADDR:	equ	8h
CSPin_DriveMode_0_ADDR:	equ	108h
CSPin_DriveMode_1_ADDR:	equ	109h
CSPin_DriveMode_2_ADDR:	equ	bh
CSPin_GlobalSelect_ADDR:	equ	ah
CSPin_IntCtrl_0_ADDR:	equ	10ah
CSPin_IntCtrl_1_ADDR:	equ	10bh
CSPin_IntEn_ADDR:	equ	9h
CSPin_MASK:	equ	8h
; CSPin_Data access macros
;   GetCSPin_Data macro, return in a
macro GetCSPin_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 8h
endm
;   SetCSPin_Data macro
macro SetCSPin_Data
	or		[Port_2_Data_SHADE], 8h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[CSPin_Data_ADDR], a
endm
;   ClearCSPin_Data macro
macro ClearCSPin_Data
	and		[Port_2_Data_SHADE], ~8h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[CSPin_Data_ADDR], a
endm

; AGND address and mask equates
AGND_Data_ADDR:	equ	8h
AGND_DriveMode_0_ADDR:	equ	108h
AGND_DriveMode_1_ADDR:	equ	109h
AGND_DriveMode_2_ADDR:	equ	bh
AGND_GlobalSelect_ADDR:	equ	ah
AGND_IntCtrl_0_ADDR:	equ	10ah
AGND_IntCtrl_1_ADDR:	equ	10bh
AGND_IntEn_ADDR:	equ	9h
AGND_MASK:	equ	10h
; AGND_Data access macros
;   GetAGND_Data macro, return in a
macro GetAGND_Data
	mov		a,[Port_2_Data_SHADE]
	and		a, 10h
endm
;   SetAGND_Data macro
macro SetAGND_Data
	or		[Port_2_Data_SHADE], 10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[AGND_Data_ADDR], a
endm
;   ClearAGND_Data macro
macro ClearAGND_Data
	and		[Port_2_Data_SHADE], ~10h
	mov		a, [Port_2_Data_SHADE]
	mov		reg[AGND_Data_ADDR], a
endm

