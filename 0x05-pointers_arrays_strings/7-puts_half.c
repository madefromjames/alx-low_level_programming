#include "main.h"

/**
 * puts_half - print half of a string
 * @str: n character
 */
void puts_half(char *str)
{
	int len, half;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (half = 5; half < len; half++)
	{
		_putchar(half[str]);
	}
	_putchar(10);
}
