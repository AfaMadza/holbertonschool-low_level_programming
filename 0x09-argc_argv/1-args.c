#include <stdio.h>
/**
* main - prints the number of arguments passed.
*
* @argc: number of arguments
* @argv: array of pointers to arguments.
* Return: None.
*/
int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", argc);

	return (0);
}
