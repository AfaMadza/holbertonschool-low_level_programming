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
	char *s = malloc(sizeof(char) * _strlen(str));

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != 0; i++)
		s[i] = str[i];
	if (s == 0)
		return (0);
	else
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
