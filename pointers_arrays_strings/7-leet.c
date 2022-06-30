#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: Pointer to string to encode
 * Return: Pointer to encoded string
 */

char *leet(char *s)
{
	char ch[11] = {'a', 'A', 'e', 'E', 't', 'T', 'l', 'L', 'o', 'O'};
	char ds[11] = {'4', '4', '3', '3', '7', '7', '1', '1', '0', '0'};
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		while (*(ch + j) != '\0')
		{
			if (*(s + i) == *(ch + j))
				*(s + i) = *(ds + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
