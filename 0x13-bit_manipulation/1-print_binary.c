#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 *print_binary - prints the binary representation of a number.
 *@b: pointer to binary number.
 * Return: converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0;

	mask = 0;
	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
	}
	if (flag == 0)
		_putchar('0');
}
