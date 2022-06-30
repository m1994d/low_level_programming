#include "main.h"

/**
 * aux - Auxiliar function for sqrt_recursion
 * @n: Number to find sqrt
 * @i: Possible sqrt
 * Return: i if is the exact sqrt, -1 in other case
 */

int aux(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i < n)
		return (aux(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to be evaluated
 * Return: Sqrt of n, or -1 if n doesn't have natural sqrt
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (aux(n, i));
}
