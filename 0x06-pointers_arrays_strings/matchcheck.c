#include "holberton.h"
/**
* matchcheck - checks for a match in two different strings.
*
* Return: 0 or 1 for success of failure.
* @x: pointer to second string
* @y: pointer to first string
*/
int matchcheck(char *x, char *y)
{
	while (*y)
	{
		if (*x++ != *y++)
		{
			return (0);
		}
	}
	return (1);
}
