#include "main.h"

/**
 * closeandfree - Closes file descriptors and frees buffer
 * @fd1: First file descriptor
 * @fd2: Second file descriptor
 * @buff: Buffer to free
 */

void closeandfree(int fd1, int fd2, char *buff)
{
	close(fd1);
	close(fd2);
	free(buff);
}

/**
 * copy_file - copies a file.
 * @file_from: File from copy
 * @file_to: File to copy.
 * Return: 1 on success, -1 on fail
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, lenfrom, lento, aux;
	char *buff;

	lenfrom = 1;
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-2);
	buff = (char *)malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);
	while (lenfrom > 0)
	{
		lenfrom = read(fd1, buff, 1024);
		if (lenfrom == -1)
		{
			closeandfree(fd1, fd2, buff);
			return (-1);
		}
		lento = write(fd2, buff, lenfrom);
		if (lento == -1)
		{
			closeandfree(fd1, fd2, buff);
			return (-2);
		}
	}
	aux = close(fd1);
	if (aux == -1)
		return (fd1);
	aux = close(fd2);
	if (aux == -1)
		return (fd2);
	free(buff);
	return (1);
}

/**
 * main - Main function for cp
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int aux;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	aux = copy_file(argv[1], argv[2]);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (aux == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (aux != 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", aux);
		exit(100);
	}
	return (0);
}
