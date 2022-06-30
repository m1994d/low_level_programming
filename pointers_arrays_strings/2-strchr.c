#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: String to search in
 * @c: Character to search
 * Return: Pointer to first occurrence of c in s, or NULL if character
 * is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	ret = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	else
		return (ret);
}
