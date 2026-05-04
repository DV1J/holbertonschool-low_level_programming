#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: is an integer
 *
 *Return: Always 0
 */
int print_last_digit(int n)
{
	int la;

	la = n % 10;

	if (la < 0)
	{
		la = -la;
	}
	_putchar(la + '0');

	return (la);
}

