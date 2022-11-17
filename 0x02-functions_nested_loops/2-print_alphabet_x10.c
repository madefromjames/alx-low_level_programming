#include "main.h"

/**
 * print_alphabet_x10 - 10 times alphabet in lowercase
 *
 * Return: 10 times alphabet
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 97; j < 123; j++)
			_putchar(j);
		_putchar(10);
	}
}
