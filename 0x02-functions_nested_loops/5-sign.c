#include "holberton.h"
/**
* print_sign - Use _putchar to print string
*
* @n: this is the number to be checked
* Return: value is 1 if greater than 0, 0 if 0 and -1 if anything else
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
