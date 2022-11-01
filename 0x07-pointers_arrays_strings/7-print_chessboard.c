#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: two dimensional array
 * with 8 rows and 8 columns
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	/*traversing 2D array*/
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			/*putchar rows and columns*/
			_putchar(a[row][col]);
		}
		_putchar(10);
	}
}
