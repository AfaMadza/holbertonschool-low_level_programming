#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 *
 *@format: list of types of arguments passed to function.
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	op_t arg_format[] = {
		{"c", print_ch},
		{"i", print_in},
		{"f", print_fl},
		{"s", print_st},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	char *sep = "";
	char *sep2 = ", ";

	va_list args;
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[j] != '\0')
	{
		while (arg_format[i].op != NULL)
		{
			if (format[j] == *arg_format[i].op)
			{
				printf("%s", sep);
				sep = sep2;
				arg_format[i].f(args);
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");
	va_end(args);
}
/**
 * print_ch - print char
 *@args: char to be printed.
 */
void print_ch(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_in - print int
 *@args: int to be printed.
 */
void print_in(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_fl - print float
 *@args: float to be printed.
 */
void print_fl(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_st - print string.
 *@args: string to be printed.
 */
void print_st(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)\n");
		return;
	}
	printf("%s", s);
}
