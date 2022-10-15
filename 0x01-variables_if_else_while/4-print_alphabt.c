#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, except for q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if ('q' != lower && 'e' != lower)
		{
			putchar (lower);
		}
	}
	putchar ('\n');
	return (0);
}
