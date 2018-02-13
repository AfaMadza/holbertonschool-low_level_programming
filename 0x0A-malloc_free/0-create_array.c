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
		return (0);
	a = malloc(size * sizeof(unsigned int));
	for (i = 0; i < size; i++)
	{
			a[i] = c;
	}
	if (a == 0)
		return (0);
	else
		return (a);
}
