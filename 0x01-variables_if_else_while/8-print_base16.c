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
	char Z = 'a';

	while (x < 10)
	{
		putchar(x + '0');
		x = x + 1;
	}
	while (Z <= 'f')
	{
		putchar(Z);
		Z++;
	}

	putchar('\n');
	return (0);
}
