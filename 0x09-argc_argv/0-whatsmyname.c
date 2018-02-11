#include <stdio.h>
/**
* main - prints a string followed by a new line.
*
* @argc: number of arguments
* @argv: array of pointers to arguments.
* Return: None.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
