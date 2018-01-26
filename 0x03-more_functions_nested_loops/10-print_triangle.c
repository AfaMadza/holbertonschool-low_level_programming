#include "holberton.h"
/**
* print_triangle - print n number of lines.
*
* Return: None.
* @size: number of times to print hash
*/
void print_triangle(int size)
{
	int hash;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (spaces = 1; spaces <= size; spaces++)
			{
				if (spaces <= size - hash)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
