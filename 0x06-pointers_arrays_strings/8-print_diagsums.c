#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of the two diagonals of a square matrix.
 *
 * @a: pointer to a multi-dimensional array.
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum, sum2;

	for (i = 0; a[i] < size; i++)
	{
		sum = sum + x[i][i];
		sum2 = sum2 + x[i][size - i -1];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
