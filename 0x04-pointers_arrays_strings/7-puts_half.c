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
	int length_of_the_string = _strlen(str);

	if ((length_of_the_string  % 2) != 0)
	{
		i = (length_of_the_string + 1) / 2;
	}
	else if ((length_of_the_string % 2) == 0)
	{
		i = length_of_the_string  / 2;
	}
	while (i < length_of_the_string)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
* _strlen - returns length of a string
*
* @s: pointer to string whose length will be returned
* Return: None
*/
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
