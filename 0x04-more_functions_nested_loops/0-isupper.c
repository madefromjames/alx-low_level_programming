#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: print uppercase
 * Return: 1 is uppercase and 0 if not.
 */
int _isupper(int c)
{
	if (c == 'A' || c != 'a')
		return (1);
	else
		return (0);

	return (0);
}
