#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * Return: dest
 * @s: pointer to memory area to be filled.
 * @b: character to fill memory area with.
 * @n: number of bytes to be filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int length = _strlen(s);

	for (i = 0 ; i < n; i++)
		s[i] = b;
	s[length + i] = '\0';

	return (s);
}
