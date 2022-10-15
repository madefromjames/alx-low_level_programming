#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 11)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}
