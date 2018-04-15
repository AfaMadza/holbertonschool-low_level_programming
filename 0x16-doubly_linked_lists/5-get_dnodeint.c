#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: pointer to head of linked list.
 * @index: index whose node needs to be returned
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (counter < index)
	{
		counter++;
		head = head->next;
		if (head == NULL)
			return(NULL);
	}
	return (head);
}
