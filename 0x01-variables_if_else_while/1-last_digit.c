#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit
 *
 * Return: 0;
 */

int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	} else if (n < 6 && n != 0)
	{
		printf("Last digiti of %d is %d and is less than 6 and not 0\n", n, j);
	}
	
	return (0);
}
