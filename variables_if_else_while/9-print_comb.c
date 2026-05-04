#include <stdio.h>

/**
 *main - print all possible combination of single digit numbers
 *
 *Return: Always 0
 */

int main(void)
{
	int di;

	for (di = 0; di < 10; di++)
	{
		putchar(di + '0');
		if (di != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
