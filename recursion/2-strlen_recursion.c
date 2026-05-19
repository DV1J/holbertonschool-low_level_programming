#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: contain string
 *Return: len
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[l] == '\0')
	{
		return (-1);
	}
	if (s[l] == 0)
	{
		return(1);
	}
	return _strlen_recursion(s + 1);
}
