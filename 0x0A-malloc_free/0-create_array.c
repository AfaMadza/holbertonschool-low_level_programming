#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* create_array - creates and initializes an array of chars.
*
* @size: size of array
* @c: character to initialize array with.
* Return: pointer to array or NULL for failure.
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
