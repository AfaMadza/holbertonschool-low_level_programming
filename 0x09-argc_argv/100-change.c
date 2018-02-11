#include "holberton.h"
#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>
/**
* main - adds positive integers.
*
* @argc: number of arguments
* @argv: array of pointers to arguments.
* Return: None.
*/
int main(int argc, char *argv[])
{
	int change = 0;

	if (argc != 2)
		printf("Error\n");
	else if (!isdigit(argv[1][0]))
		printf("Error\n");
	else
	{
		change = check_change(atoi(argv[1]));
		printf("%d\n", change);
	}
	return (0);
}
/**
* check_change - checks for amount of change due.
*
* @x: integer that needs to be evaluated.
* Return: change due.
*/
int check_change(int x)
{
	int div[] = {25, 10, 5, 2, 1};
	int i = 0;
	int change_due = 0;

	if (x < 0)
	{
		printf("0\n");
	}
	else
	{
		while (x > 0)
		{
			if (x >= div[i])
			{
				change_due += x / div[i];
				x = x % div[i];
			}
			else if (x < div[i])
			{
				i++;
			}
		}
	}
	return (change_due);
}
