#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in array using linear search
 * @array: pointer to array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 or index of value for success or failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i <= size)
	{
		if (i == size)
			break;
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i++;
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n",
			       (int)i, array[i]);
			return (i);
		}
	}
	return (-1);
}
