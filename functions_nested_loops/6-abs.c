/**
 * _abs - Returnts absolute value
 * @c: to be evaluated
 * Return: Absolute value of n
 */

#include "main.h"

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
