#include <stdlib.h>

/**
 * free_grid - free two dimensional array
 * @grid: the grid
 * @height: the height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
