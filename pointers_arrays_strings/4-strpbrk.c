#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: String to search in
 * @accept: Bytes to search on s
 * Return: Pointer to byte in s that matches with one of the bytes
 * in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *ret;

	ret = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ret = &s[i];
				break;
			}
		}
		if (ret != NULL)
			break;
	}
	return (ret);
}
