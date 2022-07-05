#include <stdio.h>

/**
 * main - returns all the arguments
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
