#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - perform simple operations.
 * @argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: pointer to desired function.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", ((get_op_func(argv[2]))(x, y)));
	return (0);
}
