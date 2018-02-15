#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* array_range - allocates memory for an array, using malloc.
*
* @nmemb: number of elements in array.
* @size: bytes each element should be allocated.
* Return: None.
*/
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc(max);

	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	return (s);
}
