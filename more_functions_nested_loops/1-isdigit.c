#include "main.h"

/**
 *_isdigit - checks for a digit (0 through 9)
 *@c: is an ingeter
 *
 *Return: depends on results
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (1);
}
