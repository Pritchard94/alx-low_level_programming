#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid
 * @grid: the grid
 * @height: of the grid
 *
 * Return: the grid fre
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
