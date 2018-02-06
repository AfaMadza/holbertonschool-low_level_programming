#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of the two diagonals of a square matrix.
 *
 * @a: pointer to a multi-dimensional array.
 * @size: size of array.
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i = i + size + 1)
	{
		sum = sum + a[i];
	}
	for (i = size - 1; i <= (size - 1) * size
		     ; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
