#include "holberton.h"
/**
* print_line - print n number of lines.
*
* Return: None.
* @n: number of times to print line.
*/
void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (spaces = 0; spaces < n; spaces++)
		{
			for (lines = 0; lines < n; lines++)
			{
				_putchar(92);
				_putchar('\n');
				if (spaces != (n - 1))
				{
					_putchar(' ');
				}
			}
		}
	}
}
