#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int a, b, sum;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			sum = a * b;
			if (b == 0)
				{
					_putchar(sum / 10 + '0');
				}
				else if (sum < 10)
				{
					_putchar(sum + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (sum >= 10)
				{
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
		}
		_putchar(10);
	}
}
