#include "holberton.h"

/**
 * append_text_to_file - create a file
 *
 * @filename: name file to create
 * @text_content: content to file
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int iter = 0;
	int fd;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (0);

	while (text_content[iter] != '\0')
		iter++;

	if ((write(fd, text_content, iter)) < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
