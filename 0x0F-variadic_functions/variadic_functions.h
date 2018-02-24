#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct op - struct of type and associated function.
 *@op: type including int, float, char, and string.
 *@f: associated function.
 */
typedef struct op
{
	char *op;
	void (*f)(va_list a);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_ch(va_list a);
void print_in(va_list a);
void print_fl(va_list a);
void print_st(va_list a);

#endif
