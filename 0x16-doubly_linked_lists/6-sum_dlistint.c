#include "lists.h"
/**
 * sum_dlistint - summs all data(n) of doubly linked list
 * @head: pointer to head of linked list.
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
