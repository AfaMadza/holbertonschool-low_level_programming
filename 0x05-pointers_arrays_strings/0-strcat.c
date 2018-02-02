#include "holberton.h"
/**
* _strcat - appends the src string to the dest string.
*
* Return: dest
* @dest: pointer to dest
* @src: pointer to src
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int length = _strlen(dest);

	for (i = 0 ; src[i] != '\0' ; i++)
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
