#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return:  None
 *
*/

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar('1');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
