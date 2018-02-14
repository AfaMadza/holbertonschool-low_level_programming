#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates all arguments.
*
* @ac: number of arguments
* @av: array of pointers to arguments.
* Return: pointer to new string or NULL for failure.
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	char *s;
	int length = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = length + _strlen(av[i]);
	}
	s = malloc((length + 1 + ac) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
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
