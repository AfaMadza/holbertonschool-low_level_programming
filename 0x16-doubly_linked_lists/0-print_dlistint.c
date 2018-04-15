#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list.
 * @h: pointer to head of linked list.
 * Return: number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
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
			printf("%d\n", node->n);
			node = node->next;
			node_num++;
		}
	}
	else
	{
		while (node != NULL)
		{
			printf("%d\n", node->n);
			node = node->prev;
			node_num++;
		}
	}
	return (node_num);
}
