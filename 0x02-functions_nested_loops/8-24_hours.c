#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0;
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= (60 * 2); a++)
	{
		if (a < 3)
		{
			_putchar('0' + a);
		}
		for (b += a; b <= 9; b++)
		{
			_putchar('0' + b);
			_putchar(58);
		}
			for (c = 0; c < 6; c++)
			{
				_putchar('0' + c);
			}
				for (d += c; d <= 9; d++)
				{
					_putchar('0' + d);
					_putchar(10);
				}
	}
}
