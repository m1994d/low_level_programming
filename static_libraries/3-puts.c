#include "main.h"
#include <unistd.h>

/**
 * _puts -  function that prints a string, followed by
 * a new ine, to stdout.
 *
 * @str: input string for the function
 * Return: void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
