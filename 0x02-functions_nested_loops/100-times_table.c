#include "main.h"

/**
 * print_times_table - print times table
 * @n: > or < should not print
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int row, col, pro;

	if (n >= 15 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				pro = (row * col);
				if (col == 0)
					_putchar('0' + pro);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (pro <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + pro);
					}
					else if (pro > 9 && pro < 100)
					{
						_putchar(' ');
						_putchar('0' + (pro / 10));
						_putchar('0' + (pro % 10));
					}
					else if (pro >= 100)
					{
						_putchar('0' + (pro /100));
						_putchar('0' + ((pro /10) % 10));
						_putchar('0' + (pro % 100));
					}
				}
			}
			_putchar('\n');
		}
	}
}
