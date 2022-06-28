#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer to first int
 * @b: Pointer to second int
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
