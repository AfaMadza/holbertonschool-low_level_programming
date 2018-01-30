#include "holberton.h"
/**
 * print_rev - prints a string...in reverse of course.
 *
 * @s: pointer to string to be printed
 * Return: None
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
