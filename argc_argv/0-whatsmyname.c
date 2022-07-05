#include <stdio.h>

/**
 * main - returns the name of the function
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
