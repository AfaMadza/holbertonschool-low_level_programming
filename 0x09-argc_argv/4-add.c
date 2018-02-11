#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - adds positive integers.
*
* @argc: number of arguments
* @argv: array of pointers to arguments.
* Return: None.
*/
int main(int argc, char *argv[])
{
	int i;
	unsigned int x;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; x < strlen(argv[i]); x++)
			{
				if ((isdigit(argv[i][x])) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
