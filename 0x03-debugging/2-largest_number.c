#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (largest > b && c)
		printf("%d is the largest number\n", largest);
	else
		printf("%d is not the largest number\n", largest);

	return (largest);
}
