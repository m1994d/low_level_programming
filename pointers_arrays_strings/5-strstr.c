#include "main.h"
#include <stddef.h>

/**
 * _strstr - ocates a substring.
 * @haystack: Pointer to string to search in
 * @needle: Pointer to string to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *ret;

	ret = NULL;
	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			ret = &haystack[i - 1];
			while (needle[j] != '\0' && haystack[i] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					i++;
					j++;
				}
				else
					break;
				}
				if (needle[j] != '\0')
					ret = NULL;
			}
		}
		if (needle[0] != '\0')
			return (ret);
		else
			return (haystack);
}
