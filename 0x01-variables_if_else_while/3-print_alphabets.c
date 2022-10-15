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
	for (upper = 97; upper <= 122; upper++)
	{
		putchar(upper);
	}

	return (0);
}
