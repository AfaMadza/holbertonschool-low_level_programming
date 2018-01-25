#include "holberton.h"
/**
* print_times_table - prints times table for n
* @n: Integer for which multiplication table will be created
* Return: None
*/
void print_times_table(int n)
{
	int columns;
	int rows;
	int digits;

	for (rows = 0; rows < (n + 1); rows++)
	{
		for (columns = 0; columns < (n + 1); columns++)
		{
			digits = columns * rows;
			if (n > 15 || n < 0)
			{
				return;
			}
			else if ((columns * rows) < 10)
			{
				format(digits);
				_putchar(digits + '0');
			}
			else if ((columns * rows > 10) && (columns * rows <= 99))
			{
				format(digits);
				_putchar((digits / 10) + '0');
				_putchar((digits % 10) + '0');
			}
			else if ((columns * rows) == 10)
			{
				format(digits);
				_putchar((digits / 10) + '0');
				_putchar((digits % 10) + '0');
			}
			else if ((columns * rows) > 99)
			{
				format(digits);
				_putchar((digits / 100) + '0');
				_putchar(((digits / 10) % 10) + '0');
				_putchar((digits % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
