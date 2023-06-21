#include <stdio.h>
#include "main.h"

/**
 * main - print putchar
 *
 * Return: 0;
 */

int main(void)
{
	char james[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(james[i]);
	}
	_putchar(10);

	return (0);
}
