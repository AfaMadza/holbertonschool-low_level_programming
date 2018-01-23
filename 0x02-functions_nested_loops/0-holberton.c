#include "holberton.h"
/**
* main - Use _putchar to print string
*
* Return: On success 0.
*
*/
int main(void)
{
	char string[] = "Holberton\n";
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (0);
}
