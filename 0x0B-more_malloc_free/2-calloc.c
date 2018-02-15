#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc.
*
* @nmemb: number of elements in array.
* @size: bytes each element should be allocated.
* Return: None.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (x == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)x + i) = 0;
	return (x);
}
