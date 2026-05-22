#include "main.h"

/**
 *free_grid - frees a 2 dimensional grid made by us
 *@grid: array that contains 2 dimemsional
 *@height: height
 */
void free_grid(int **grid, int height)
{
	int i;


	if (grid == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
