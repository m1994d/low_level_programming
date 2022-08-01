#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string which contains the binary number
 * Return: Converted number or 0 if the string is NULL or if there is
 * a character different of 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i, j;

	ret = 0;
	i = 0;
	j = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			ret += (b[i] - '0') << j;
			i--;
			j++;
		}
		else
			return (0);
	}
	return (ret);
}
