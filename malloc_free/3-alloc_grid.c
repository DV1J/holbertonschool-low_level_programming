#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width
 *@height: height
 *Return: 0 || grid

 */
int **alloc_grid(int width, int height)
{
	int col = 0, row = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
	{
		free(grid);
		return (0);
	}
	for(col  = 0; col < height; col ++)
	{
		grid[0] = malloc(width * height * sizeof(int));
		if (grid[0] == 0)
		{
			while (col < row)
			{
				free(grid);
			}
		free(grid[0]);
		return (0);
		}
	}
	for (row = 1; row < height; row++)
	{
		grid[row] = grid[0] + (row * width);
	}
	for (row = 0; row < height; row++)
	{
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
	}
	return (grid);
}

