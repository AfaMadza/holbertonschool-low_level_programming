#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 *flip_bits - returns the number of bits to flip to get number.
 *@n: first number.
 *@m: second number.
 * Return: number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (bit_count(n ^ m));
}
/**
 *bit_count - counts number of set bits.
 *@x: number whose set bits need to be counted.
 *Return: set bits.
 */
int bit_count(unsigned long int x)
{
	int counter = 0;

	while (x)
	{
		counter += x & 1;
		x >>= 1;
	}
	return (counter);
}
