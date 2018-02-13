#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
*
* @str: string to be copied to new space in memory.
* Return: pointer to duplicated string or NULL for failure.
*/
char *_strdup(char *str)
{
	int i;
	char *s;

	s = malloc(sizeof(char) * (_strlen(str) + 1));

	if (str == NULL)
		return (NULL);
	/*if (s == NULL)
	  return (NULL);*/
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[_strlen(str) + 1] = '\0';
	if (s == NULL)
		return (NULL);
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
