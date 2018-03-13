#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to STDOUT.
 *@filename: pointer to filename.
 *@letters: the number of letters it should read and print.
 *Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len;
	char *buf;

	if (letters <= 0)
		return (0);
	buf = malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);

	/* read */
	fd = open(filename, O_RDONLY,  S_IRUSR);
	if (fd == -1)
		return (0);
	len = read(fd, buf, letters);
	buf[letters] = '\0';

	/* write */
	if ((write(STDOUT_FILENO, buf, len)) == -1)
	{
		close(fd);
		free(buf);
		return (-1);
	}
	close(fd);
	free(buf);
	return (len);
}
