#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: The difference between the 2 first different characters in ASCII
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int ret;

	ret = 0;
	for (i = 0 ; *(s1 + i) != '\0' ; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{	
			ret = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (ret);
}
