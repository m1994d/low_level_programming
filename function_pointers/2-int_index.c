#include "function_pointers.h"

/**
 * int_index - searches for an integer using the cmp function
 * @array: array to look into
 * @size: Size of the array
 * @cmp: Pointer to function to compare
 * Return: Index of the first match, or -1 if there's no match
 * or if size is 0 or less.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array !=  NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
