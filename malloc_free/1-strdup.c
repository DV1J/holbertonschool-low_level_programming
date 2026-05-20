#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *@str: pointer
 *Return: Null ||
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *arry;

	if (str == 0)
	{
	return (0);
	}
	i = strlen(str);
	arry = malloc((i + 1) * sizeof(char));
	if (arry == 0)
	{
		return (0);
	}
	strcpy (arry, str);
	return (arry);
	free(str);
}
