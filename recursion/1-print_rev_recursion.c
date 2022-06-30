#include "main.h"

/**
 *_print_rev_recursion - prints a string reversed, followed by a new line.
 *@s: String to print
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s = s + 1;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
