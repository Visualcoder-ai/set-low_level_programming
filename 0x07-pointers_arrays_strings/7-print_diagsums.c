#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer to the first element of the matrix (1D representation)
 * @size: The size of the square matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Primary diagonal (top-left to bottom-right) */
		sum1 += a[i * size + i];

		/* Secondary diagonal (top-right to bottom-left) */
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
