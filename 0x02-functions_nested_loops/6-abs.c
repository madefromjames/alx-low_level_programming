#include <stdlib.h>
#include "main.h"

/**
 * _abs - absolute value of an integer.
 * @r: absolute integer
 *
 * Return: Always 0
 */
int _abs(int i)
{
	if (i > 0)
		_putchar(i);
	else if (i < 0)
		_putchar(-i);

	return (0);
}
