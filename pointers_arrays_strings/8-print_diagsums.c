#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: Pointer to matrix
 * @size: Size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int ts;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	ts = size * size;
	for (i = 0; i < ts; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = (size - 1); i <= (ts - size); i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
