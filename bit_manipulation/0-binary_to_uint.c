#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: contain string
 *Return: converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bin = (bin << 1) + (b[i] - '0');
	}
	return (bin);
}

