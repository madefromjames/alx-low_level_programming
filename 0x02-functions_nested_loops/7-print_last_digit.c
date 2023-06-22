#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: return last digit
 *
 * Return: 0;
 */
int print_last_digit(int i)
{
	int last = i % 10;

	_putchar('0' + last);



	return (last);
}
