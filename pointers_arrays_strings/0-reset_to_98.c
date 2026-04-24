#include <stdio.h>

/**
 * main - takes a pointer to an int and updates its value
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int *n;

	i = 300;
	n = &i;
	printf("value of 'i': %d\n", i);
	printf("Address of 'i': %p\n", &n);
	printf("valus of 'n': %p\n", n);
	*n = 402;
	printf("updated value of 'i': %d\n", i);
	return (0);
}
