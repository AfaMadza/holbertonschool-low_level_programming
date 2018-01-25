#include "holberton.h"
/**
* print_line - print n number of lines.
*
* Return: None.
* @n: number of times to print line.
*/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n != 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
