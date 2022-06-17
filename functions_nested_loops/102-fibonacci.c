/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0;
 */

#include <stdio.h>

int main(void)
{
	int pos;
	long int num1, num2, fib;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld, ", num1, num2);
	for (pos = 1; pos <= 48; pos++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if (pos != 48)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
	}
	return (0);
}
