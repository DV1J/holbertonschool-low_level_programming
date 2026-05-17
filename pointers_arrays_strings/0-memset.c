#include "main.h"

/**
 *0-memset.c - fills memory with a constant byte
 *@s: pointer 1
 *@b: pointer 2
 *@n: pointer 3
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i ++)
	{
		s[i] = b;
	}
	return (s);
}
