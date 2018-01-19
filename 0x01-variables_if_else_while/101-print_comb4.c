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
	int ones = 2;
	int tens = 1;
	int a = 2;
	int hundo = 0;
	int b = 0;

	while (hundo <= 7)
	{
		while (tens <= 8)
		{
			while (ones <= 9)
			{
				putchar(hundo + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundo !=7 || tens != 8 || ones != 9)
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
		b++;
		hundo = b;
	        tens = b + 1;
		ones = b + 2;
		}

	putchar('\n');
	return (0);
}
