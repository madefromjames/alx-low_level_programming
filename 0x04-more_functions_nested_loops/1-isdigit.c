#include "main.h"
#include <ctype.h>

/**
 * main - checks for a digit (0 through 9)
 * @c: returns digit
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
