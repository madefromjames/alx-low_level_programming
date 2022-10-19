#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: print sign given
 *
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
	return (1);
	return (0);
	return (-1);
}
