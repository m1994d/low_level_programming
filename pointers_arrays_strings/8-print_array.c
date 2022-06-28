#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to array to print
 * @n: number of elements of the array to be printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", *(a + i));
	}
	if (n > 0)
		printf("%d\n", *(a + (n - 1)));
	else
		printf("\n");
}
