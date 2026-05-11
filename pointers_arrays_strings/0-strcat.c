#include "main.h"

/**
 *_strcat - changes the null terminator to '!'
 *@dest:The destination buffer
 *@src:the source string to copy
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		dest[i] = '\0';
	}
	return (dest);
}

