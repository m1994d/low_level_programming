#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - Entry point
 * @string: pointer - string
 * Return: Always 0 (Success)
 */
char *rot13(char *string)
{
	char (*alphabet) = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char (*ROT13) = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; *(string + i) != '\0'; i++)
		for (j = 0; *(alphabet + j) != '\0'; j++)
			if (*(alphabet + j) == *(string + i))
			{
				*(string + i) = *(ROT13 + j);
				break;
			}

	return (string);
}
