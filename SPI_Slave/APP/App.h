#include "../LIB/STD_TYPES.h"

#include "../MCAL/PORT/PORT_interface.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/SPI/SPI_interface.h"

#include <util/delay.h>

uint8_t global_u8Read;//global variable to read the data sent

void APP_init(void)
{
	/*PORT initialization*/
	PORT_INIT();
	/*SPI initialization*/
	SPI_SLVinit();
}

void App_prog(void)
{
	/*Receive the data sent and save it*/
	SPI_Receive_char(&global_u8Read);
	/*Wait for 500 ms*/
	_delay_ms(500);
	/*display the received value on Lend in port A*/
	DIO_SETportVal(DIO_PORTA,global_u8Read);
}
