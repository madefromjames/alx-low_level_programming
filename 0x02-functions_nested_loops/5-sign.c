#include "main.h"

/**
 * print_sign - print the sign of a numbber
 * @n: checks for number
 *
 * Return: 1, 0 and -1;
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
	return (1);
	if (n == 0)
		_putchar(48);
	return (48);
	if (n < 0)
		_putchar(45);
	return (-1);
}
