#include "holberton.h"
/**
*  _sqrt_recursion - returns the natural square root of a number.
*
* @n: base number.
* Return: square root of n.
*/
int _sqrt_recursion(int n)
{
	int m;

	m = n % 10;

	if (m == 2 || m == 3 || m == 7 || m == 8)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (find_sqr(n, 1));

}
/**
*  find_sqr - returns the sqaure root of a numer.
*
* @x: base number.
* @g: number to increment until it equals sqaure root of x.
* Return: square root of n.
*/
int find_sqr(int x, int g)
{

	if (x / g == g)
		return (g);
	return (find_sqr(x, g + 1));
}
