#include <stdio.h>

/**
 *main - prints single digit number of base 10 from 0
 *
 *Return: Always 0
 */

int main(void)
{
	int di;

	for (di = 0; di < 10; di++)
	{
		putchar(di + '0');
	}
	putchar('\n');

	return (0);
}
