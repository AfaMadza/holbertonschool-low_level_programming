#include <stdio.h>
/**
* main - assign random number to variable n and print string
*
* Description: Prints last digit of string assigned to n
* section header: Prints last digit of string
* Return: Return value is 0
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
