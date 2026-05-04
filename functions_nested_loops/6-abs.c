#include "main.h"
#include <stdlib.h>

/**
 *_abs - turn the values in to absolute values
 *@val: is an integer
 *
 *Return: Always 0
 */

int _abs(int val)
{
	if (val < 0)
	{
		return (-val);
	}
	else
	return (val);
}
