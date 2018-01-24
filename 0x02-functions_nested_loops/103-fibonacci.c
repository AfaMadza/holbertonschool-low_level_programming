#include <stdio.h>
/**
* main - print first even fibonnaci numbers less than 33rd excluding 0 and 1
* Return: 0
*/
int main(void)
{
	unsigned long int x = 0, y = 1, z, i, sum=0;

	for (i = 1; i <= 33; i++)
	{
		z = x + y;
		if (z % 2 == 0)
		{
			sum = sum + z;
		}
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
