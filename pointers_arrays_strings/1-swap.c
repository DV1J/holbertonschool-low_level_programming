#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@a: value 1
 *@ob: valua 2
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

