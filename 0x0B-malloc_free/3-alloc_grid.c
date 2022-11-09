#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	/**
	 * allocate in memory an array of pointers
	 * each element reference to a different row
	 * of the 2D array
	 */
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	/*Acces every row p[i] and allocate memory*/
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			/*we loop over p and free each row*/
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
		}
	}
	/*creates and display the 2D array*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
