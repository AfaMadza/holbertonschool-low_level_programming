#include <stdio.h>
#include<stdlib.h>
/**
* main - multiplies two numbers
*
* @argc: number of arguments
* @argv: array of pointers to arguments.
* Return: None.
*/
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}

	return (0);
}
