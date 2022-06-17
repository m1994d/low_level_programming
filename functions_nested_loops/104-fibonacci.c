/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0;
 */

#include <stdio.h>

int main(void)
{
	int pos;
	double num1, num2, fib;

	num1 = 1;
	num2 = 2;
	printf("%.0f, %.0f, ", num1, num2);
	for (pos = 1; pos <= 96; pos++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if (pos != 96)
			printf("%.0f, ", fib);
		else
			printf("%.0f\n", fib);
	}
	return (0);
}
