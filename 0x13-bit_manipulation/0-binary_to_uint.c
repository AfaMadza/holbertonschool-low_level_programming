#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to binary number.
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{

	int i, j, len;
	unsigned int dec_val = 0;
	unsigned int position = 1;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] == '0')
		{
			dec_val += 0 * position;
			position = position * 2;
		}
		else
		{
			dec_val += 1 * position;
			position = position * 2;
		}
	}
	return (dec_val);
}
