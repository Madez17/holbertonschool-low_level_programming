#include "holberton.h"

/**
 * read_textfile - read file and write
 *
 * @filename: pointer
 * @letters: number char
 *
 * Return: save number char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int save;
	int save2;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	save = read(fd, buf, letters);

	if (save < 0)
	{
		free(buf);
		return (0);
	}

	save2 = write(1, buf, save);

	if (save2 < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (save);
}
