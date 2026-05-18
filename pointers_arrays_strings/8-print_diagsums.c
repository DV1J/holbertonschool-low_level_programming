#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer of firstthe matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumA = 0;
	int sumB = 0;

	for (i = 0; i < size; i++)
	{
		sumA += a[i * size + i];
		sumB += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumA, sumB);
}
