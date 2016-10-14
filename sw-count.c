#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main()
{
	int i = 0;
	init_peripheral();
	while (1)
	{
		if (IS_SW_PRESSED())
			i += 1;
		
		while (IS_SW_PRESSED())
			set_led_value(i);
		_delay_ms(10);
	}
	return 0;
}