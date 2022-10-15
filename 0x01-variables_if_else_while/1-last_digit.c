#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Reduce: 0 (Always)
 */
int main(void)
{
	int n, lastt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastt = n % 10;

	printf("Last digit of %i is %i and is ", n, lastt);
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else if ((n < 6) != 0)
	{
		printf("less than 6 and not 0\n");
	}
	return(0);
}
