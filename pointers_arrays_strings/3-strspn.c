#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: String to search in
 * @accept: Bytes to search on s
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int ret;

	ret = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ret += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (ret);
}
