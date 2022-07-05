#include <stdio.h>

/**
 * main - returns number of commands
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
		return (0);
}
