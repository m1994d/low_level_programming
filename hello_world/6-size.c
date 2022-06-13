/**
 *  * main - prints size of variables
 *   * Return: 0
 *    */
#include <stdio.h>

int main(void)
{
		printf("Size of a char: %lu byte(s)\n", (int)sizeof(char));
			printf("Size of an int: %lu byte(s)\n", (int)sizeof(int));
				printf("Size of a long int: %lu byte(s)\n", (int)sizeof(long int));
					printf("Size of a long long int: %lu byte(s)\n", (int)sizeof(long long int));
						printf("Size of a float: %lu byte(s)\n", (int)sizeof(float));
							return (0);
}
