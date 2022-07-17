#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>


/**
 * print_all - prints anything.
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *s, *sep;

	va_start(ap, format);
	sep = "";
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
