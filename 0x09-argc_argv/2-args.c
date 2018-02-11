#include <stdio.h>
/**
* main - prints the names of arguments passed.
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
