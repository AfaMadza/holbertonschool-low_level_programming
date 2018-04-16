#include "holberton.h"
/**
 * _abs - displays absolute value of int
 * @r: number to be checked
 * Return: value is 0
 */
int _abs(int r)
{

	if (r < 0)
	{
		r = r * (-1);
	}
	else
	{
		r = r * (1);
	}
	return (r);
}
