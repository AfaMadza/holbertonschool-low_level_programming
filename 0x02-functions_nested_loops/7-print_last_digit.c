#include "holberton.h"
/**
* print_last_digit - prints last digit
* @x: number to be checked
* Return: value is 0
*/
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = y * (-1);
	}
	_putchar(y + '0');
	return (y);
}
