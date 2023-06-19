#include <stdio.h>

/**
 * main - print base 10 numberz
 *
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar(10);
	return (0);
}
