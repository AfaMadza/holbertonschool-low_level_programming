 #include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: pointer to head of linked list.
 * @index: index whose node needs to be returned
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int counter = 0;

	if (index > dlistint_len(node))
		return (NULL);
	while (node->next != NULL && counter != index)
	{
		node = node->next;
		counter++;
	}
	return (node);
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
