#include "main.h"

/**
 * aux - Auxiliar function for is_prime
 * @n: number to check if is prime
 * @i: auxiliar number
 * Return: i if is a divisor of n
 */

int aux(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	else if (i < n)
		return (aux(n, i + 1));
	else
		return (1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	else
		return (aux(n, i));
}
