#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the length of elements in a listint_t list.
 *@h: pointer to listint_t list
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
