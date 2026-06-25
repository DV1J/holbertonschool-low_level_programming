#include "main.h"
/**
 *get_bit -  returns the value of a bit at a given index
 *@n: check num
 *@index: index to  position
 *Return: value if index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (i < index)
	{
		n >>= 1;
		i++;
	}
	return (n & 1);
}
