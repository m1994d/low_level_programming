#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: String to capitalize
 * Return: Pointer to capitalized string
 */

char *cap_string(char *s)
{
	char spr[14] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};
	int i;
	int j;

	i = 0;
	j = 0;
	if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	while (*(s + i) != '\0')
	{
		while (*(spr + j) != '\0')
		{
			if (*(s + i) == *(spr + j))
			{
				if (*(s + (i + 1)) >= 97 && *(s + (i + 1)) <= 122)
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}
