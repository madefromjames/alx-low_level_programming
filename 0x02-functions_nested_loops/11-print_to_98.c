#include "main.h"

/**
 * print_to_98 - print from int 'n' to 98
 * @n: from 'n' to 98
 *
 * Return: 0;
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		for (i = n; i >= 98; i--)
		{
			if (i <= 98 || i >= 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar(10);
}
