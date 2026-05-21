#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *@str: pointer
 *Return: Null ||
 */
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *arry;

	if (str == 0)
	{
	return (0);
	}
	while(str[i] != '\0')
	{
		i++;
	}
	arry = malloc((i + 1) * sizeof(int));
	if (arry == 0)
	{
		return (0);
	}
	while (j < i)
	{
		arry[j] = str[j];
		j++;
	}
	return (arry);
	free(arry);
}
