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
	int ones = 0;
	int tens = 0;
	int hundo = 0;

	while (hundo < 8)
	{
		tens = hundo + 1;
		while (tens < 9)
		{
			ones = tens + 1;
			while (ones < 10)
			{
				putchar(hundo + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundo < 7)
				{
					putchar(',');
					putchar(' ');
				}
				ones++;
			}
			tens++;
		}
		hundo++;
	}

	putchar('\n');
	return (0);
}
