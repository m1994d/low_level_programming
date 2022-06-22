/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: To proove
 * Return: 1 if c is a digit, 0 otherwise
 */

#include "main.h"

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
