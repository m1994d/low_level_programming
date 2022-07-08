#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 * @min: Lower limit of the array, included.
 * @max: Higher limit of the array, included.
 * Return: Pointer to the created array.
 */

int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min + 1));
	if (ret == NULL)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		ret[i] = min + i;
	return (ret);
}
