#include "main.h"

/**
 * _isdigit - check through 0 to 9
 * @c: if c is a digit
 * Return: 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

	return (0);
}
