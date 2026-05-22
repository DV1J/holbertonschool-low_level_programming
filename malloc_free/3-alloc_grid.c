#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width
 *@height: height
 *Return: 0 || grid
 */
int **alloc_grid(int width, int height)
{
	int col, row;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
	{
		return (0);
	}
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == 0)
		{
			while (row > 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (0);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}
	return (grid);
}

