#include "led.h"
#include "uart.h"
#include "timebase.h"


int main(void)
{
	RCC_Config();
	GPIO_Config();
	UART_TRANSMIT_Config();
	TIME_BASE_INIT();
	while(1)
	{
		printf("Hello My Precious...\n\r");
		Delay(1);
	}
}
