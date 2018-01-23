#include "holberton.h"
/**
* _isalpha - Use _putchar to print string
*
* @c: this is the number to be checked
* Return: value is 0 if alphabet and 1 if anything else
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
