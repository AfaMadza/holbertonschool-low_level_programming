#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint2 - free a listint_t list.
 *@head: double pointer to start of list.
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *i = *head;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return;

	for (; i != NULL; i = next)
	{
		next = i->next;
		free(i);
	}
	head = NULL;
}
