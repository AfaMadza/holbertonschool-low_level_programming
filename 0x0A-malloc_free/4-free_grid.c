#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - frees a 2D grid that was previously created.
*
* @grid: address of 2D array.
* @height: height of array.
* Return: pointer to array.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
