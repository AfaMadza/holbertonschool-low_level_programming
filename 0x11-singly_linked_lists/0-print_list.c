#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 *@h: pointer to list_t list
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; len++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return(len);
}
