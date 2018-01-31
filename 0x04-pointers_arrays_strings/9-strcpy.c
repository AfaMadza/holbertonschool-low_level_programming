#include "holberton.h"
/**
 * _strcpy - copy string from pointer
 *
 * @dest: pointer to destination string will be copied to.
 * @src: pointer to string to be copied.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - returns length of a string
 *
 * @s: pointer to string whose length will be returned
 * Return: None
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
