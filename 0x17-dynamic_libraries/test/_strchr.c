#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 *
 * Return: pointer to char c or NULL
 * @c: char to search for.
 * @s: pointer to string to be searched.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
	}
	if (c == '\0')
	{
		p = (s + i);
	}
	return (p);
}
