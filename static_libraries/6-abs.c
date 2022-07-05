#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: input number to calculate its abs value.
 * Return: abs value of n.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	return (n * (-1));
}
