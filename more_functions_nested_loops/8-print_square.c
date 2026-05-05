#include "main.h"
/**
 *print_square - prints a square, followed by a new line
 *@size: size
 *
 *Return; Always 0
 */

void print_square(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
