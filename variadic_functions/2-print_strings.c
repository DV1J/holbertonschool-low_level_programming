#include "variadic_functions.h"

/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator: speparates the strings
 *@n: contains string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *prt_str;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		prt_str = va_arg(print, char *);
		if (prt_str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", prt_str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);
}


