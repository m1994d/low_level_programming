#include "main.h"

/**
 * create_file - creates a file.
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, aux, txt_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
			continue;
		aux = write(fd, text_content, txt_len);
		if (aux == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
