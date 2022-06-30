#include "main.h"

/**
 * _strlen_recursion - eturns the length of a string.
 * @s: String to be measured
 * Return: Lenght of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
