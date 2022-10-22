#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function that checks for uppercase
 * @c: return char
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c == 'A' && c != 'a')
		return (1);
	else
		return (0);
}
