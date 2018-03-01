#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 *@h: pointer to list_t list
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; len++)
	{
		if (h->str == NULL)
			return(0);
		h = h->next;
	}
	return(len);
}
