#include "holberton.h"
/**
* jack_bauer - prints time from 0000hrs to 2359hrs
* Return: None
*/
void jack_bauer(void)
{
	int mins;
	int hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(58);
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');

		}
	}
}
