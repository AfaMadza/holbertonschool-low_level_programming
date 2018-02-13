#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
*
* @width: width of array.
* @height: height of array.
* Return: pointer to array.
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * width);
	if (s == NULL);
	return (NULL);
	for (i = 0; i < width; i++)
	{
		s[i] = malloc(sizeof(int) * height);
		if (s[i] == 0)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
