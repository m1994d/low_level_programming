#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *	@c: input character to find out if it's a letter
 * Return: 0 if it's a letter or 1 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
