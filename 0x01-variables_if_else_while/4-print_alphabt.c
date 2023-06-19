#include <stdio.h>

/**
 * main - print alphabet in lowercase with exceptions
 *
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar(10);

	return (0);
}
