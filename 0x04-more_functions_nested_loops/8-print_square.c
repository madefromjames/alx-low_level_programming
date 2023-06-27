#include "main.h"

/**
 * print_square - print a square
 */
void print_square(int size)
{
	int times;

	if (size <= 0)
	{
		_putchar(10);
	}
	else 
	{
		for (times = 0; times <= size; times++)
	{
		if (times < size)
			_putchar(35);
	}
	_putchar(10);
}
