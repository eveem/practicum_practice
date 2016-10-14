#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main()
{
	init_peripheral();
	while (1)
	{
		uint16_t value = read_adc(PC4);
		uint16_t led = value/340, light = 1;
		int i = 0;
		for (i = 0; i<led; i++)
			light *= 2;
		
		set_led_value(light);
	}
	return 0;
}