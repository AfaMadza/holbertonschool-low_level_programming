#include "holberton.h"
/**
* Print_times_table - prints times table for n
* Return: None
*/
void print_times_table(int n)
{
	int columns;
	int rows;

	if ( n > 15 || n < 0)
	{
		break;
		for (; columns < (n*n); columns++)
		{
			for (; rows < (n*n); rows++)
			{
				if ((columns * rows) < 10)
				{
					if (rows != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((columns * rows) + '0');
				else if ((columns * rows) > 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((columns * rows) / 10 + '0');
					_putchar((columns * rows) % 10 + '0');
				else if ((columns * rows) == 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((columns * rows) / 10 + '0');
					_putchar((columns * rows) % 10 + '0');
				}
				else if ((columns * rows) > 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((columns * rows) / 100 + '0');
					_putchar(((columns * rows) / 10) /10 + '0');
					_putchar((columns * rows) % 10 + '0');
				}


				}
				_putchar('\n');
			}
}
