#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * Return: number of bytes in initial segment of string.
 * @s: pointer to string.
 * @accept: bytes that should be in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
