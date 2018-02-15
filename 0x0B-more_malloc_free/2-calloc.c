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
	char *s;

	if (size == 0 || nmemb == 0)
		return (NULL);

	s = (int *)malloc(nmemb * size);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
