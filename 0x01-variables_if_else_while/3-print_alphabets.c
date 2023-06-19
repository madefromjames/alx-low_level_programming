#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: 0;
 */

int main(void)
{
	int i;
	int x;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (x = 65; x < 91; x++)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
