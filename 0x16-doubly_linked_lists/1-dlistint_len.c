#include "lists.h"
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
	else
	{
		while (node != NULL)
		{
			node = node->prev;
			node_num++;
		}
	}
	return (node_num);
}
