#include "../LIB/STD_TYPES.h"

#include "../MCAL/PORT/PORT_interface.h"
#include "../MCAL/SPI/SPI_interface.h"

#include <util/delay.h>

void App_init(void)
{
	/*Port initialization to initialize direction and initial values*/
	PORT_INIT();
	/*SPI master made initialization*/
	SPI_MASTinit();
}

void App_prog(void)
{
	/*Send character A to the slave*/
	SPI_Transmit_char('A');
	/*wait 500 ms*/
	_delay_ms(500);
	/*Send character B to the slave*/
	SPI_Transmit_char('B');
	/*wait 500 ms*/
	_delay_ms(500);
	/*Send character C to the slave*/
	SPI_Transmit_char('C');
	/*wait 500 ms*/
	_delay_ms(500);
}
