#include "holberton.h"
/**
* _memcpy - copies memory area.
*
* Return: dest
* @dest: pointer to memory area that src content will be copied to.
* @src: pointer to memory area to be copied.
* @n: number of bytes to be copied.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int length = _strlen(src);

	for (i = 0 ; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
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
