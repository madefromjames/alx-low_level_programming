#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other char
 * @str: exclude other char
 */
void puts2(char *str)
{
	int len, even;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (even = 0; even < len; even++)
	{
		if (even % 2 == 0)
			_putchar(str[even]);
	}
	_putchar(10);
}
