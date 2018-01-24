#include <stdio.h>
#include "holberton.h"
/**
* main - displays sum of all multiples of 5 or 3
* Return: 0
*/
int main(void)
{
	int x;
	int sum;

	for (x = 3; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	printf("%i\n", sum);
	return (0);
}
