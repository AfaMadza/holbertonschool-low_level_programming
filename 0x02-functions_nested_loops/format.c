#include "holberton.h"
/**
* format - function to add comma and space before numbers in tables
*
* @n: this is the number being passed from print_times_table function
* Return: value is 0
*/
int format(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if ((n >= 10) && (n <= 99))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if (n > 99)
	{
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
