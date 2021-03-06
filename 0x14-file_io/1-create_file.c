#include "holberton.h"
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

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	len = string_len(text_content);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
