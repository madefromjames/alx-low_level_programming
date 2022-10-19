#include <stdlib.h>
#include "main.h"

/**
 * _abs - absolute value of an integer.
 * @i: absolute integer
 *
 * Return: Always 0
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);

	return (0);
}
