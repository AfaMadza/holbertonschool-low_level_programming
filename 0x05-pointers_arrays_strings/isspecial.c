#include "holberton.h"
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
