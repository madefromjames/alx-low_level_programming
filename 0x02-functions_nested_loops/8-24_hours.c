#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(58);
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar(10);
		}
	}
}
