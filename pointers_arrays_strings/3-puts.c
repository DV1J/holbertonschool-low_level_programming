#include "main.h"

/**
 *_puts -  prints a string, followed by a new line,
 *@str: where string lis located
 */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
