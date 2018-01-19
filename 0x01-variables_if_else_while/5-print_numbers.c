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

	while (x < 10)
	{
		printf('%i', x);
		x = x + 1;
	}

	putchar('\n');
	return (0);
}
