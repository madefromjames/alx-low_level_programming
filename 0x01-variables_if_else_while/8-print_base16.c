#include <stdio.h>

/**
 * main - base 16 numbers
 *
 * Return: 0;
 */

int main(void)
{
	char i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		} else
		{
			putchar('A' + i - 10);
		}
	}

	putchar(10);

	return (0);
}
