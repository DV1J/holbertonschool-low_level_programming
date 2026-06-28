#include "main.h"

/**
 *flip_bits - flip to get from one number to another
 *@n: num 1
 *@m: num 2
 *Return: number of different bits from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned int diff = 0;

	while (bit != 0)
	{
		if (bit & 1)
			diff++;

		bit >>= 1;
	}
	return (diff);
}
