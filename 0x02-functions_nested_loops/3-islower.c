#include <ctype.h>
#include "main.h"

/**
 * _islower - check for lowercase
 * @c: first parameter
 *
 * Return: 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
