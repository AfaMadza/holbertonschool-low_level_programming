#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer to string to be printed
 * Return: None
 */
void _puts(char *str)
{
	int x = 0;

	for (; *str != '\0'; str++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
