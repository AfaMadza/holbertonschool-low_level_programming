#include "holberton.h"
/**
* set_string - sets the value of a pointer;
*
* Return: None
* @s: double pointer to string.
* @to: bytes that should be in s.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
