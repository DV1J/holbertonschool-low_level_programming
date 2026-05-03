#include <stdio.h>

/**
 *main - prints lowercase then uppercase alphabet followed by a new line
 *
 *Return: Always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}
