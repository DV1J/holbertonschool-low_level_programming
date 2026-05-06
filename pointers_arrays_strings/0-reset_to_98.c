#include "main.h"
/**
 *reset_to_98 - takes parameter and updates the value it points to to 98
 *@n: integer were parameter is taken
 *
 *Return: Always 0
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
