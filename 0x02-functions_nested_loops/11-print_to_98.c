#include<stdio.h>
/**
* print_to_98 - prints from given int to 98
* @n: starting point
* Return: None
*/
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		if (n != 98)
		{
			printf("%i, ", n);
		}
		else
		{
			printf("%i", n);
		}
	}
	for (; n >= 98; n--)
	{
		if (n != 98)
		{
			printf("%i, ", n);
		}
		else
		{
			printf("%i", n);
		}
	}
	putchar('\n');

}
