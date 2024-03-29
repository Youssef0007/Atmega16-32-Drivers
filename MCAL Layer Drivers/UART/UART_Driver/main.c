#include "UART_Interface.h"
//#include "LCD/LCD_Interface.h"
//#include "util/delay.h"
//#include "avr/io.h"
//void APP_void_display(u8 received_byte);
#include "DIO/DIO_Interface.h"
int main(void)
{
	//u8 Str[20];
	u8 data;

	M_DIO_Void_SetPinDirection(PD1_PIN , 1);

	/* Initialize the UART driver with Baud-rate = 9600 bits/sec */
	UART_Init();

	UART_sendByte('A');
    while(1)
    {
		data = UART_receiveByteSynch(); /* Receive Byte from Terminal1 */
		UART_sendByte(data);       /* Re-send the received byte to Terminal2 */
		//UART_receiveString(Str);     /* Receive String from Terminal */
	    //UART_sendString(Str);        /* Re-send the string to Terminal2 */
    }
}

//void APP_void_display(u8 received_byte){
//	H_Lcd_Void_LCDWriteCharacter(received_byte);
//}
