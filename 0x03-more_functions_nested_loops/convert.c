#include "holberton.h"
#include <stdio.h>
/**
* convert - convert 2 digit int to char
* @x: number to be converted using modulus and division
* Return: Always 0.
*/
void convert(int x)
{
	if (x > 9 && x < 99)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else
	{
		_putchar(x + '0');
	}
}
