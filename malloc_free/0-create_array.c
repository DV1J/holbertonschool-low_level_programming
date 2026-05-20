#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: checks for size
 *@c: char
 *Return: Null || array
 */
char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}
	arry = malloc(size * sizeof(char));
	if (arry == 0)
	{
		return (0);
	}
	while (i < size)
	{
		arry[i] = c;
		i++;
	}
	return (arry);
	free(arry);
}
