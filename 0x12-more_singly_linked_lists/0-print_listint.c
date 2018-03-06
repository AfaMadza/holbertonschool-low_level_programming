#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *@h: pointer to list_t list
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
