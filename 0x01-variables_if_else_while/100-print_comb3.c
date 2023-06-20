#include <stdio.h>

/**
 * main - print two numbers
 *
 * Return: 0;
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 5 || (i == 5 && j != 6))
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
