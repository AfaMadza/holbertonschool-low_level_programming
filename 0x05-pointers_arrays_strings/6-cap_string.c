#include "holberton.h"
/**
* cap_string - capitalize all words of string.
*
* @s: pointer to string
* Return: string.
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		if (isspecial(s[i]) == 1)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = (s[i + 1]) - 32;
			}
		}

	}
	return (s);
}
/**
* isspecial - checks to see if a character is special.
*
* @x: character to be evaluated
* Return: 1 if special, 0 if not.
*/

int isspecial(char x)
{
	switch (x)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}
