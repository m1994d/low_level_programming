#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the pultiplication of two integers
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{

	int k;

	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	k = (atoi(argv[1]) * atoi(argv[2]));

	printf("%d\n", k);
	return (0);
}
