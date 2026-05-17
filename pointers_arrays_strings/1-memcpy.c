#include "main.h"

/**
 *_memcpy - copies memory area.
 *@dest: where copied values will be stored
 *@src: pointer to n
 *@n: pointer where values are stored
 *return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char tmp;

	for (i = 0; i < n; i++)
	{
		tmp = *src + 1;
		dest[i] = *src;
		*src = tmp;
	}
	return (dest);
}
