#include "holberton.h"
/**
 * puts2 - print only one character out of two
 *
 * @str: pointer to string whose charcters will be printed.
 * Return: None
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
