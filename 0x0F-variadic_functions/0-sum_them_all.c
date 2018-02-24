#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all parameters.
 *
 *@n: number of arguments passed.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list arguments;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);

	return (sum);
}
