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

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastt);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastt);
	}
	else if ((n < 6) != 0)
	{
		printf("Last digit of %d id %d and is less than 6 and not 0\n", n, lastt);
	}
	return(0);
}
