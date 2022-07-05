#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *	@c: Is the input character of the function
 * Return: 1 if c is lowercase - 0 otherwise
 */


int _islower(int c)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (c == ch)
			return (1);
		ch++;
	}
	return (0);
}
