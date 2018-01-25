#include "holberton.h"
/**
* _isdigit - chech to see if parameter is a digit.
*
* Return: On success 1, otherwise 0.
* @c: number to be checked.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
