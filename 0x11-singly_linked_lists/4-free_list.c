#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - add a node to the end of a list.
 *@head: pointer to start of list.
 * Return: None.
 */
void free_list(list_t *head)
{
	list_t *i = head;
	list_t *next = NULL;

	for (; i != NULL; i = next)
	{
		next = i->next;
		free(i->str);
		free(i);
	}
}
