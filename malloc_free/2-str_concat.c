#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: null || arry
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *arry;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	arry = malloc((len1 + len2 + 1) * sizeof(char));
	if (arry == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		arry[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		arry[i + j] = s2[j];
		j++;
	}
	arry[i + j] = '\0';
	return (arry);
	free(arry);
}
