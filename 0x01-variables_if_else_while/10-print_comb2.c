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
	int x = 0;
	/*int y = 0;*/
	int counter = 0;

	while (counter <= 9)
	{
		while (x <= 9)
		{
			putchar(counter + '0');
			putchar(x + '0');
			if (counter != 9 || x != 9)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		x = 0;
		counter++;
	}

	putchar('\n');
	return (0);
}
