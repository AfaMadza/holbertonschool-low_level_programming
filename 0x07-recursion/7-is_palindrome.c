#include "holberton.h"
/**
*  is_palindrome - determines if a string is a palindrome
*
* @s: pointer to string
* Return: 0 or 1 for success or failure.
*/
int is_palindrome(char *s)
{
	int length, i, l;
	i = 0;

	l = _strlen_recursion(s);
	length = l - 1;

	return (is_pal(s, i, length));
}
/**
* is_pal - checks various cases for palindromic tendencies
*
* @s: pointer to string
* @b: beginning of string
* @e: end of string
* Return: 0 or 1 for success or failures
*/
int is_pal(char *s, int i, int length)
{
	if (length <= i)
		return (1);

	if (s[i] == s[length])
		return(is_pal(s, i + 1, length - 1));

	else
		return(0);
}
/**
* _strlen_recursion - returns length of string.
*
* Return: None
* @s: pointer to string.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
