#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: separate the numbers
 *@n: contains numbers
 *Return: NULL ||
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);
}
