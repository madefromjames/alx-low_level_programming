#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: print sign given
 *
 * Return: any number
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
	else if (n < 0)
	{
		_putchar('-');
	}
	return (1);
	return (0);
	return (-1);
}
