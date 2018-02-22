#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_sub - subtracts two ints.
 * @a: first int.
 * @b: second int.
 * Return: subtraction.
 */
int op_sub(int a, int b)
{
	int c;

	c = (a - b);
	return (c);
}
/**
 * op_add - sums two ints.
 * @a: first int.
 * @b: second int.
 * Return: sum.
 */
int op_add(int a, int b)
{
	int c;

	c = (a + b);
	return (c);
}
/**
 * op_mul - multiplies two ints.
 * @a: first int.
 * @b: second int.
 * Return: product.
 */
int op_mul(int a, int b)
{
	int c;

	c = (a * b);
	return (c);
}
/**
 * op_div - divides two ints.
 * @a: first int.
 * @b: second int.
 * Return: division.
 */
int op_div(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = (a / b);
	return (c);
}
/**
 * op_mod - modulo two ints.
 * @a: first int.
 * @b: second int.
 * Return: remainder.
 */
int op_mod(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = (a % b);
	return (c);
}
