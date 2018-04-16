#include "holberton.h"
/**
 * _isupper- chech to see if parameter is capitalized
 *
 * Return: On success 1, otherwise 0.
 * @c: Letter to be checked.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
