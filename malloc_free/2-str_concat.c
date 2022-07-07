#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: First string (Beginning)
 * @s2: Second string (Ending)
 * Return: Pointer to concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1;
	int len2;
	char *ret;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;
	ret = malloc(len1 + len2 + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ret[i] = s1[i];
	for (i = len1; i < (len1 + len2); i++)
		ret[i] = s2[i - len1];
	return (ret);
}
