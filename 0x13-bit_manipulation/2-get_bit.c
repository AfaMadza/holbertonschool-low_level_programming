#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: pointer to binary number.
 *@index: index whose bit value should be returned.
 * Return: value of bit at index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > sizeof(n) * 8)
		return (-1);
	if (((n >> index) & 1) == 0 || ((n >> index) & 1) == 1)
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	return (-1);
}
