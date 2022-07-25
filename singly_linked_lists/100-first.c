#include <stdio.h>

/**
 * first - Print something before main
 */

void __attribute__ ((constructor)) first()
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
