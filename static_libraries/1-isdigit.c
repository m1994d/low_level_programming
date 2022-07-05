#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: the int for the paramaters of my function
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
