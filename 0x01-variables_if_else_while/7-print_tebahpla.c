#include <stdio.h>

/**
 * main - print reverse lowercase
 *
 * Return: 0;
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar(10);
	return (0);
}
