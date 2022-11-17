#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int lines;

	for (lines = 0; lines <= 9; lines++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
