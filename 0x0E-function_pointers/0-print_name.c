#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: name of the person
 * @f: function pointer to a function that prints name.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
