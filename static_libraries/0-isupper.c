#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input parameter
 * Return: 1 if c is uppercase or 0 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
