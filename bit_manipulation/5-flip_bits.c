#include "main.h"

/**
 * flip_bits - calcs the number of bits you would need
 * to flip to get from one number to another.
 * @n: First number
 * @m: Second number
 * Return: Number of bits that should be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret;

	ret = 0;
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			ret += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (ret);
}
