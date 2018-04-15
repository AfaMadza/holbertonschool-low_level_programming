#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to head of linked list.
 * @idx: index where node needs to be inserted.
 * @n: data for new node.
 * Return: sum of data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *idx_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	node = *h;
	idx_node = get_dnodeint_at_index(node, idx);
	idx_node = idx_node->prev;

	new_node->next = idx_node->next;
	idx_node->next = new_node;
	new_node->prev = idx_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
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
			return (NULL);
	}
	return (head);
}
