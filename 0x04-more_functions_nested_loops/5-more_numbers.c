#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char ten, rod;

	for (ten = 0; ten < 10; ten++)
	{
		for (rod = 0; rod <= 14; rod++)
		{
			if (rod > 9)
				_putchar(rod / 10 + 48);
			_putchar(rod % 10 +  48);
		}
		_putchar(10);
	}
}
