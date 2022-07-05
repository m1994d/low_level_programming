#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of inputs on the command line
 * @argv: array with the elements of the command line
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{

	int i = 1, j = 1, sum = 0;

	if (argc == 0)
		return (0);

	while (i < argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
