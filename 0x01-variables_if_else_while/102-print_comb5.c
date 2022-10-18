#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = a; c <= 9; c++)
			{
				for (d = b + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d + '0';
			}
		}
	}
	putchar(10);
	return (0);
}
