#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of times
 */
void print_diagonal(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		if (line <= n)
			_putchar(92);
		else if (line < 0)
			_putchar(10);
		_putchar(10);
	}
}
