#include "main.h"

/**
 * print_line - draw a straight line
 * @n: n should print _
 */
void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		if (line <= n)
			_putchar(95);
		else if (line < 0)
			_putchar(10);
	}
	_putchar(10);
}
