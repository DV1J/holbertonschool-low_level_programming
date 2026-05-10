#include "main.h"

/**
 *puts_half -  prints half of a string, followed by a new line.
 *@str: contains string
 */

void puts_half(char *str)
{
	int len;
	int i, n;

	for (len = 0; str[len] != '\0'; len++)
	{
		/** calculating lenght */
	}
	n = len / 2;
	for (i = len - n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
