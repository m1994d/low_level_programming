#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: String which separates numbers
 * @n: Amount of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "\0";
	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < (n - 1); i++)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d\n", va_arg(ap, int));
	}
	else
		printf("\n");
	va_end(ap);
}
