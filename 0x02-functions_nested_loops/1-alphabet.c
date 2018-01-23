#include "holberton.h"
/**
* print_alphabet - Use _putchar to print string
*
*
*/
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
