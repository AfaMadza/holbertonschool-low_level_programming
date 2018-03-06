#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * pop_listint - deletes head and returns the value of int member.
 *@head: double pointer to start of list.
 * Return: None.
 */
int pop_listint(listint_t **head)
{
	listint_t *i = *head;
	int var;

	if (*head == NULL)
		return (0);

	*head = i->next;
	var = i->n;
	free(i);

	return (var);

}
