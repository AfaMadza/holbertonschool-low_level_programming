#include <stdio.h>
/**
* main - print largest prime factor of a number.
*
* Return: 0.
*/
int main(void)
{
	unsigned long x;
	unsigned long num = 612852475143;

	for (x = 2; x < num; x++)
	{
		while (num % x == 0)
		{
			num = (num / x);
		}
	}
	printf("%lu\n", num);
	return (0);

}
