#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: pointer to operator passed as argument.
 * Return: pointer to desired function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(++s) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
