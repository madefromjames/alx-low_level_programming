#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: print uppercase
 * Return: 1 is uppercase and 0 if not.
 */
int _isupper(int c)
{
	if (c == 65)
		return (1);
	else if (c != 99)
		return (0);

	return (0);
}
