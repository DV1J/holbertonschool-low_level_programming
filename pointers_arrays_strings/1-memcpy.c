#include "main.h"

/**
 *_memcpy - copies memory area.
 *@dest: where copied values will be stored
 *@src: pointer to n
 *@n: pointer where values are stored
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
