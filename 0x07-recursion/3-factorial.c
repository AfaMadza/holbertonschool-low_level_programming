#include "holberton.h"
/**
* factorial - returns factorial of a number.
*
* Return: factorial of a number.
* @n: number whos factorial will be returned.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else if (n > 0)
		n = n * factorial(n - 1);
	return (n);
}
