#include "main.h"

/**
 *times_table - prints the 9 time table starting from 0
 *
 */
void times_table(void)
{
	int n, m, t;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			t = n * m;

			if (t <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((t / 10) + '0');

			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
