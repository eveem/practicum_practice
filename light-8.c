#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main()
{
	init_peripheral();
	while (1)
	{
		uint16_t value = read_adc(PC4);
		uint16_t led = value/128;		
		set_led_value(led);
		_delay_ms(200);
	}
	return 0;
}