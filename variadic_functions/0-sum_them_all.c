#include "variadic_functions.h"
#include "stdarg.h"

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: unsigned in containing values
 *Return: 0 || sum`
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list sum;
	va_start (sum, n);

	for(i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		s += va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (s);
}

