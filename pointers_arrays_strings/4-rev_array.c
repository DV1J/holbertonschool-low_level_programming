#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: pointer
 *@n: values
 */

void reverse_array(int *a, int n)
{
	int i;
	char tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
