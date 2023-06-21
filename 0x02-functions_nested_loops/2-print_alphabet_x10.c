#include "main.h"

/**
 * print_alphabet_x10 - alphabet x10
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar(10);
	}
}
