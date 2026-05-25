#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: num of things in the array
 *@size: size of things in the array
 *Return: NULL || pointer 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arry;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	arry = malloc (size * nmemb * sizeof(char));
	if (arry == 0)
	{
		return (0);
	}
	for (i = 0; i < nmemb; i++)
	{
		arry[i] = 0;
	}
	return (arry);
}
