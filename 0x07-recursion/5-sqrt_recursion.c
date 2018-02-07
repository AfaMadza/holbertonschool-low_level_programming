#include "holberton.h"
/**
*  _sqrt_recursion - returns the natural square root of a number.
*
* @n: base number.
* Return: square root of n.
*/
int _sqrt_recursion(int n)
{
	int x = n % 10;

	if (x == 2 || x == 3 || x == 7 || x == 8)
	{
		return (-1);
	}
	else
		

}

{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
