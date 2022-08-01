#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int power;

	aux = n;
	power = 0;
	if (n == 0)
		_putchar('0');
	while (aux > 0)
	{
		power++;
		aux = aux >> 1;
	}
	while (power > 0)
	{
		aux = n >> (power - 1);
		_putchar((aux & 1) + '0');
		aux = n;
		power--;
	}
}
