#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int n, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (n = 1; n <= size; n++)
	{
		for (i = 1; i <= size - n; i++)
		{
			_putchar(' ');
		}
		for (i = 1; i <= n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
