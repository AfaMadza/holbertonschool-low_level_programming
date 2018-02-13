#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
*
* @s1: string to be concatenated
* @s2: string to be concatenated
* Return: pointer to concatenated string or NULL for failure.
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;
	int total_length;

	if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

	total_length = _strlen(s1) + _strlen(s2);
	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
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
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
