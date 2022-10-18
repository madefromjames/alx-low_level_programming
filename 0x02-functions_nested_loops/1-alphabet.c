#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	putchar(10);
}
