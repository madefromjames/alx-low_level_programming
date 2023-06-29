#include "main.h"

/**
 * _puts - pprint a string to stdout
 * @str: pointer to character
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar(10);
}
