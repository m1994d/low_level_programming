/**
 * print_last_digit - Prints last digit of n
 * @n: To be evaluated
 * Return: last digit of n
 */

#include "main.h"
#include <stdlib.h>

int print_last_digit(int n)
{
	char t;

	t = ((abs(n % 10)) + '0');
	_putchar(t);
	return (abs(n % 10));
}
