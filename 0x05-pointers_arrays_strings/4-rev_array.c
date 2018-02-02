#include "holberton.h"
/**
 * reverse_array - reverse an array
 *
 * @a: pointer to array contents to be reversed
 * @n: number of elements in array
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int *begin, *end, temp;

	begin = a;
	end = a + (n - 1);

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
