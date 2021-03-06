#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 *clear_bit - clears the value of a bit at a given index.
 *@n: pointer to binary number.
 *@index: index whose bit value should be returned.
 * Return: value of bit at index or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);

}
