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

	for (; str[i] != '\0'; i++)
	{
		if (i >= length / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
