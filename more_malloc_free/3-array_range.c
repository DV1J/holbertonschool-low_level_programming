#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: smallest val
 *@max: biggest val
 *Return: NULL || pointer
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arry;

	if (min > max)
	{
		return (0);
	}
	size = ((max + 1) - min);

	arry = malloc(size * sizeof(int));
	if (arry == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		arry[i] = min++;
	}
	return (arry);
}
