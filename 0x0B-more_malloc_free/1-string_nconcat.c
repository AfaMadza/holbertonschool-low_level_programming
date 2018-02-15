#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings up to first n bytes of s2.
*
* @s1: string to be concatenated.
* @s2: string to be concatenated.
* @n: number of bytes from s2 to be concatenated.
* Return: pointer to concatenated string or NULL for failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;
	unsigned int total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	total_length = _strlen(s1) + n + 1;
	if (n >= _strlen(s2))
		total_length = _strlen(s1) + _strlen(s2) + 1;

	s = malloc(sizeof(char) * total_length);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n >= _strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
			s[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			s[i] = s2[j];
	}
	s[total_length - 1] = '\0';
	return (s);
}
/**
 * _strlen - returns length of a string
 *
 * @s: pointer to string whose length will be returned
 * Return: None
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
