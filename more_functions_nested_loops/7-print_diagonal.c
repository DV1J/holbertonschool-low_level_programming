#include "main.h"

/**
 *print_diagonal -  draws a diagonal line on the terminal
 *@n: it is an integer
 *
 *Return: Always 0
 */

void print_diagonal(int n)
{
	int na, cho;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (na = 0; na < n; na++)
		{
			for (cho = 0; cho < na; cho++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
