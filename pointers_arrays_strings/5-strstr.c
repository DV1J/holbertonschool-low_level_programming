#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: contains main string.
 * @needle: is the substring.
 * Return: matchs or is 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (0);
}

