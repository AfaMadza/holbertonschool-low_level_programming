#include "holberton.h"
/**
 * _islower - Use _putchar to print string
 *
 * @c: this is the number to be checked
 * Return: value is 0 if lowercase and 1 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
