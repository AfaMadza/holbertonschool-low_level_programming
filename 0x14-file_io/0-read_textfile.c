#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to STDOUT.
 *@filename: pointer to filename.
 *@letters: the number of letters it should read and print.
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len;
	char *buf;
	size_t i;

	if (letters <= 0)
		return (0);
	buf = malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);

	/* read */
	fd = open(filename, O_RDONLY,  S_IRUSR);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	/* write */
	for (i = 0; buf[i] != '\0'; i++)
	{
		if (i <= letters)
			_putchar(buf[i]);
	}
	len = i;
	free(buf);
	return (len);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
