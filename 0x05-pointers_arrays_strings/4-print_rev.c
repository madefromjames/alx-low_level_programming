#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: reversed
 */
void print_rev(char *s)
{
	int len, rev;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(rev[s]);
	}
	_putchar(10);
}
