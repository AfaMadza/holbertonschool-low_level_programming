#include "holberton.h"
/**
* catnum - join the tens and units digits 
*
* Return: Always 0.
*/
int catnum(void)
{
	int x, y;

	for (x = 0; x < 1; x++)
	{
		for (y=0; y < 5; y++)
		{
			if (y != x + 5)
			{
		 		_putchar('1');
		 		_putchar(y + '0');
		 	}
		}
	}
	return(0);
}
