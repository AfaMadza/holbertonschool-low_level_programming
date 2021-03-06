#include "holberton.h"
/**
* _strncat - appends the src string to the dest string.
*
* Return: dest
* @dest: pointer to dest
* @src: pointer to src
* @n: number of bytes to be used from src
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = _strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

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
