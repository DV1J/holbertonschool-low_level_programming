#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width
 *@height: height
 *Return: 0 || array
 */
int **alloc_grid(int width, int height)
{
	int col, row;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	array = malloc(height * sizeof(int *));
	if (array == 0)
	{
		free(array);
		return (0);
	}
	for (col = 0; col < height; col ++)
	{
		array[col] = malloc(width * height * sizeof(int));
		if (array[col] == 0)
		{
			while (col --)
			{
				free(array);
			}
			free(array);
			return (0);
		}
	}
	for (row = 0; row < height; row++)
	{
		col = 0;
		while (col < width)
		{
			array[row][col] = 0;
			col++;
		}
	}
	return (array);
}

