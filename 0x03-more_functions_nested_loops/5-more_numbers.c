#include "holberton.h"
/**
* more_numbers - print numbers from 0 through 9
*
* Return: None.
*/
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			convert(x);
		}
		_putchar('\n');
	}
}
