#include <stdio.h>

/**
 *main - prints lowercase alphabet followed by new line except q and e
 *
 *Return: Always 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}

		putchar('\n');
	}

	return (0);
}
