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
	while(*s)
	{
		if (_strchr(accept, *s++))
			return (char*)--s;
	}
	return (0);
}
/**
* _strchr - locates a character in a string.
*
* Return: pointer to char c or NULL
* @c: char to search for.
* @s: pointer to string to be searched.
*/
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		else
			p = 0;
	}
	return (p);
}
