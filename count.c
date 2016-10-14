#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main()
{
	int i;
	init_peripheral();
	while (1)
	{
		for(i=0; i<8; i++)
		{
			set_led_value(i);
			_delay_ms(1000);
		}
	}
	return 0;
}