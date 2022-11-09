#include "main.h"
/**
 * free_grid - frees a 2D grid previously created
 * by alloc_grid file
 * @grid: double pointer array
 * @height: height of grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	/**
	 * i loops from i equal 0 to
	 * i less than height, so we can access
	 * to every row of the grid and then
	 * we freed every row
	 */
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
