#include "holberton.h"
/**
 * puts_half - print second half of a string
 *
 * @str: pointer to string whose second half will be printed.
 * Return: None
 */
void puts_half(char *str)
{
	int i = 0;
	int length = _strlen(str);

	if (length % 2 != 0)
	{
		i = (length - 1) / 2;
	}
	else
	{
		i = length / 2;
	}
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
