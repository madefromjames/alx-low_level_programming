#include "main.h"

/**
 * print_alphabet: Write a function that prints the alphabet, in lowercase.
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
