#include "main.h"

/**
 *string_nconcat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *@n: cheking number
 *Return: NULL || pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *arry;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	arry = malloc((len1 + n + 1) * sizeof(char));
	if (arry == 0)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		arry[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		arry[i + j] = s2[j];
	}
	arry[i + j] = '\0';
	return (arry);
}
