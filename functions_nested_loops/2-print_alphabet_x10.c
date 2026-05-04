#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char alp;

	for (n = 0; n < 10; n++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
