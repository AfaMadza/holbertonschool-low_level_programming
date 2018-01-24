#include <stdio.h>
/**
* main - print first 50 fibonnaci numbers excluding 0 and 1
* Return: 0
*/
int main(void)
{
	long int x = 0, y = 1, z, i;

	for (i = 2; i <= 50; i++)
	{
		z = x + y;
		printf("%lu", z);
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
