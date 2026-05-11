#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: The destination buffer.
 * @src: The source string to copy
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

