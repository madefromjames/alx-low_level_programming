#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char lower, upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return (0);
}
