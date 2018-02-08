#include "holberton.h"
/**
*  is_palindrome - determines if a string is a palindrome
*
* @s: pointer to string
* Return: 0 or 1 for success or failure.
*/
int is_palindrome(char *s)
{
	int length, b, e;

	length = _strlen_recursion(s);
	b = s[0];
	e = s[length - 1];

	if (*s == '\0')
		return (1);
	else
		return (is_pal(s, b, e));
}
/**
* is_pal - checks various cases for palindromic tendencies
*
* @s: pointer to string
* @b: beginning of string
* @e: end of string
* Return: 0 or 1 for success or failures
*/
int is_pal(char *s, int b, int e)
{
	if (b != e)
		return (0);
	else if (b == ' ')
		return (1);
	else if (b == e)
		return (1);
	else
		return (is_pal(s, ++b, --e));
}
/**
* _strlen_recursion - returns length of string.
*
* Return: None
* @s: pointer to string.
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
