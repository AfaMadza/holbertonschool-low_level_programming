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

	s = malloc(width * sizeof(int *));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
