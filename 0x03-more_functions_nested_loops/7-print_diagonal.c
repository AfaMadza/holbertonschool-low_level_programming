#include "holberton.h"
/**
* print_diagonal - print n number of lines.
*
* Return: None.
* @n: number of times to print line.
*/
void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
