#include "main.h"
#include <ctype.h>

/**
 * _islower - Prototype
 * @c: parameter
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
