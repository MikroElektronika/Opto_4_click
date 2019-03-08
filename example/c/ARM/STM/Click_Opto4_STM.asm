_systemInit:
;Click_Opto4_STM.c,29 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Opto4_STM.c,31 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Opto4_STM.c,32 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Opto4_STM.c,33 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Opto4_STM.c,34 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Opto4_STM.c,36 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Opto4_STM.c,38 :: 		opto4_gpioDriverInit( (T_OPTO4_P)&_MIKROBUS1_GPIO );
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_opto4_gpioDriverInit+0
;Click_Opto4_STM.c,39 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Opto4_STM.c,41 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Opto4_STM.c,43 :: 		opto4_outputEnable(_OPTO4_OUTPUT_ENABLE);
MOVS	R0, __OPTO4_OUTPUT_ENABLE
BL	_opto4_outputEnable+0
;Click_Opto4_STM.c,44 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_Opto4_STM.c,45 :: 		opto4_outputEnable(_OPTO4_OUTPUT_DISABLE);
MOVS	R0, __OPTO4_OUTPUT_DISABLE
BL	_opto4_outputEnable+0
;Click_Opto4_STM.c,46 :: 		Delay_ms( 3000 );
MOVW	R7, #20735
MOVT	R7, #549
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_Opto4_STM.c,47 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Opto4_STM.c,49 :: 		void main()
;Click_Opto4_STM.c,51 :: 		systemInit();
BL	_systemInit+0
;Click_Opto4_STM.c,52 :: 		applicationInit();
BL	_applicationInit+0
;Click_Opto4_STM.c,54 :: 		while (1)
L_main6:
;Click_Opto4_STM.c,56 :: 		applicationTask();
BL	_applicationTask+0
;Click_Opto4_STM.c,57 :: 		}
IT	AL
BAL	L_main6
;Click_Opto4_STM.c,58 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
