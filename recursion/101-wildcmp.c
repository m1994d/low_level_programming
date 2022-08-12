#include "main.h"

/**
 * bandersnatch - checks recursively for all the paths when the
 * characters are equal
 * @s1: first string
 * @s2: second string
 * Return: return value of wildcmp() or of itself
 */

int bandersnatch(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (bandersnatch(s1 + 1, s2));
}

/**
 * *move - moves the current char past the *
 * @s2: string to iterate over
 * Return: the address of the character after the *
 */

char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1));
	else
		return (s2);
}

/**
 * wildcmp - compares two strings recursively,
 * checking for wildcards expansion
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += bandersnatch(s1 + 1, s2);
		return (!!sum);
	}
	return (0);
}
