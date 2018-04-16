#include "holberton.h"
/**
 * _strncpy - copies a string
 *
 * Return: dest
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes to be used from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
