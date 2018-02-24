#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a a new line.
 *
 *@n: number of strings passed.
 *@separator: pointer to string to be printed between strings.
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *arg;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(arguments, char *);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
			if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arguments);
}
