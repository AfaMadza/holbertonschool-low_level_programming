#include <stdio.h>
/**
* main - Print string a-zA-Z
*
* Description: See above
* section header: See above
* Return: Return value is 0
*/
int main(void)
{
	int ones = 1;
	int tens = 0;
	int a = 1;

	while (tens <= 8)
	{
		while (ones <= 9)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		a++;
		ones = a;
		tens++;
	}

	putchar('\n');
	return (0);
}
