/******************************************************************************
 *
 * Module: UART
 *
 * File Name: UART_Private.h
 *
 * Description: configuration file for the UART AVR driver
 *
 * Author: Youssef Abdelaziz
 *
 *******************************************************************************/



#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

/*10,30,600,1200,2400,4800,9600,14400,38400,57600,115200,128000,256000 BPS*/
#define BAUDRATE 9600

		/*_8_BITS_DATA_MODE    ,    _9_BITS_DATA_MODE */
#define	FRAME_BITS	_8_BITS_DATA_MODE
		/*STOP_BIT_SINGLE      ,     STOP_BIT_DOUBLE*/
#define STOP_BIT	STOP_BIT_SINGLE
		/*PARITY_CHECK_OFF , PARITY_CHECK_ODD , PARITY_CHECK_EVEN*/
#define PARITY_CHECK	PARITY_CHECK_OFF
		/*DOUBLE_SPEED_TRUE , DOUBLE_SPEED_FALSE*/
#define DOUBLE_SPEED	DOUBLE_SPEED_FALSE
		/*INTERRUPT_MODE , POLLING_MODE*/
#define RECEIVE_METHOD  POLLING_MODE

#endif /* UART_CONFIG_H_ */
