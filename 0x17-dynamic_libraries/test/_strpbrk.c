#include "holberton.h"
/**
 * _strpbrk - gets the length of a prefix substring.
 *
 * Return: pointer to byte in s that matches any byte from accept
 * @s: pointer to string to be searched.
 * @accept: bytes that should be in s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
			return ((char *) --s);
	}
	return (0);
}
