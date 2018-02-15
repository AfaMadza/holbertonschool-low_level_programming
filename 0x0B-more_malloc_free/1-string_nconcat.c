#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings up to first n bytes of s2.
*
* @s1: string to be concatenated
* @s2: string to be concatenated
* Return: pointer to concatenated string or NULL for failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s;
	unsigned int total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	total_length = _strlen(s1) + n + 1;
	s = malloc(sizeof(char) * total_length);

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n >= _strlen(s2))
	{
		for (i = 0; s2[i] != '\0'; i++)
			s[_strlen(s1) + i] = s2[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
		s[_strlen(s1) + i] = s2[i];
	s[total_length] = '\0';
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
