#include "holberton.h"
/**
* times_table - prints times table up to 9
* Return: 0
*/
void times_table(void)
{
	int columns;
	int rows;

	for (columns = 0; columns < 10; columns++)
	{
		for (rows = 0; rows < 10; rows++)
		{
			if ((columns * rows) < 10)
			{
				if (rows != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((columns * rows) + '0');
			}
			else if ((columns * rows) > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((columns * rows) / 10 + '0');
				_putchar((columns * rows) % 10 + '0');
			}
			else if ((columns * rows) == 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((columns * rows) / 10 + '0');
				_putchar((columns * rows) % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
