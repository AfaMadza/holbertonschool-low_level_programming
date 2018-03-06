#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * insert_nodeint_at_index - inserts a node at given index.
 *@head: pointer to start of list.
 *@idx: index.
 *@n: int member for node to be inserted.
 * Return: sum of data member.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *aft, *prev, *temp;

	if (head == NULL || idx > num_nodes(*head))
		return (NULL);
	else if (idx == 0)
		return (add_nodeint(head, n));
	else if (idx == num_nodes(*head))
		return (add_nodeint_end(head, n));

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	for (; i < idx - 1; i++)
		temp = temp->next;
	prev = temp;
	aft = temp->next;
	prev->next = new;
	new->next = aft;
	return (new);
}
/**
 * add_nodeint - prints all the elements of a list_t list.
 *@head: double pointer to start of list.
 *@n: int member for node to be added.
 * Return: address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
/**
 * num_nodes - counts the number of nodes in a linked list.
 *@head: pointer to linked list.
 *Return: number of nodes.
 */
size_t num_nodes(const listint_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
