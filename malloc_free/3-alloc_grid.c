#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width
 *@height: height
 *Return: 0 || array
 */
int **alloc_grid(int width, int height)
{
	int col = 0, row;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	array = malloc(height * sizeof(int *));
	if (array == 0)
	{
		return (0);
	}
	array[0] = malloc(width * height * sizeof(int));
	if (array[0] == 0)
	{
		free(array);
		return (0);
	}
	for (row = 1; row < height; row++)
	{
		array[row] = array[0] + (row * width);
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
	free(array);
}

