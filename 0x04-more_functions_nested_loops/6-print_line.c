#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	char i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
		if (n < 0 && n == 0)
		{
			_putchar(10);
		}
	}

	_putchar(10);
}
