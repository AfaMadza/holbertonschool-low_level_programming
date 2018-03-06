#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint - free a listint_t list.
 *@head: pointer to start of list.
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *i = head;
	listint_t *next = NULL;

	for (; i != NULL; i = next)
	{
		next = i->next;
		free(i);
	}
}
