#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '5'; x++)
	{
		for (y = x + 1; y <= '6'; y++)
		{
			for (z = y + 1; z <= '7'; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				}
				if (x != '5' || y != '6' || z != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
