#include "holberton.h"
/**
 * exists - checks to see if a file exists.
 *@filename: pointer to file.
 *Return: 0 or -1 for success or failure.
 */
int exists(const char *filename)
{
	int fd = -1;

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (-1);
	close(fd);
	return (0);
}
/**
 * string_len - finds length of string.
 *@s: pointer to string.
 *Return: string length.
 */
int string_len(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
/**
 * create_file - creates a file.
 *@filename: pointer to filename.
 *@text_content: NULL terminated string to write to file.
 *Return: returns 1 or -1 for success of failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	char *empty = "";

	if (filename == NULL)
		return (-1);
	len = string_len(text_content);

	if ((exists(filename)) == -1)
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
		if (text_content == NULL)
		{
			write(fd, empty, 0);
			close(fd);
			return (1);
		}
	}
	else if ((exists(filename)) == 0)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		if (text_content == NULL)
		{
			write(fd, empty, 0);
			close(fd);
			return (1);
		}
	}
	write(fd, text_content, len);
	close(fd);
	return (1);
}
