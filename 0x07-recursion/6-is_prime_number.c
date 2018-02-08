#include "holberton.h"
/**
*  is_prime_number - returns 1 for prime, 0 if not.
*
* @n: base number.
* Return: 0 or 1 for success or failure.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primer(n, 2));
}
/**
*  primer - determines if a number is prime.
*
* @x: base number.
* @g: number to decrement until it divides x.
* Return: 0 or 1 for success or failure.
*/
int primer(int x, int g)
{
	if (x == g)
		return (1);
	else if (x % g == 0)
		return (0);
	else
		return (primer(x, g + 1));
}
