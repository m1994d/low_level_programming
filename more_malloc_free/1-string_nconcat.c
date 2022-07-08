#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: Prefix string
 * @s2: Suffix string
 * @n: Characters to take from s2
 * Return: Pointer to a new space containing s1 and n bytes of n2,
 * ended by a NULL character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1, len2;
	char *ret;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (j = 0; s2[j] != '\0'; j++)
		len2 += 1;
	if (n > len2)
		n = len2;
	ret = malloc(sizeof(char) * (len1 + n + 1));
	if (ret == NULL)
		return (NULL);
	for (i = 0, k = 0; s1[i] != '\0'; i++, k++)
		ret[k] = s1[i];
	for (j = 0; j < n; j++, k++)
		ret[k] = s2[j];
	ret[k] = '\0';
	return (ret);
}
