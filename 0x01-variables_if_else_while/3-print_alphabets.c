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
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
