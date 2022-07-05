#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or b if is different
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for ( ; s1[i] != '\0' && j == 0; i++)
		j = s1[i] - s2[i];
	return (j);
}
