#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts node at a given index
 * @head: pointer to head of linked list.
 * @index: index where node needs to be inserted.
 * Return: -1 or 1 for success or failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index > dlistint_len(node))
		return (-1);
	delete_node(head, index);
	return (1);
}
/**
 * delete_node - checks certain conditions before deleting a node
 * @head: double pointer to start of list
 * @index: index whose node needs to be deleted
 * Return: none
 */
void delete_node(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *idx_node;

	node = *head;
	idx_node = get_dnodeint_at_index(node, index);

	if (*head == NULL || idx_node == NULL)
		return;
	if (idx_node->prev == NULL)
		*head = idx_node->next;
	if (idx_node->next != NULL)
		idx_node->next->prev = idx_node->prev;
	if (idx_node->prev != NULL)
		idx_node->prev->next = idx_node->next;
	free(idx_node);
}
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
/**
 * dlistint_len - returns the number of elements in a doubly  linke list
 * @h: pointer to head of linked list.
 * Return: number of nodes in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num = 0;
	const dlistint_t *node = NULL;

	if (h == NULL)
		return (0);
	node = h;
	if (node->prev == NULL)
	{
		while (node != NULL)
		{
			node = node->next;
			node_num++;
		}
	}
	return (node_num);
}
