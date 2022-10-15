#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, o;

	for (i = 58; i <= 67; i++)
	{
		putchar (i);
	}

	for (o = 'a'; o <= 'f'; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
