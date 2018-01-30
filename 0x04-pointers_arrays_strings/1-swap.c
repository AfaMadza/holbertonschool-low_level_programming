#include "holberton.h"
/**
 * swap_int - swap value of two ints
 *
 * @a:First int
 * @b:Second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
