/**
 * main - prints the sum of even Fibonacci terms less than 4000000,
 * followed by a new line.
 * Return: Always 0;
 */

#include <stdio.h>

int main(void)
{
	long int num1, num2, fib, sum;

	num1 = 1;
	num2 = 2;
	sum = 2;
	fib = num1 + num2;
	while (fib < 4000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if ((fib % 2) == 0)
			sum = sum + fib;
	}
	printf("%ld\n", sum);
	return (0);
}
