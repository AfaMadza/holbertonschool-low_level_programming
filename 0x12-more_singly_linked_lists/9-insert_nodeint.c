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
	listint_t *newNode;
	listint_t *currNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;

	if (*head == NULL)
		return (newNode);
	else if (idx == 0)
		return (add_nodeint(head, n));
	currNode = *head;

	for (; i < idx - 1; i++)
		currNode = currNode->next;
	newNode->next = currNode->next;
	currNode->next = newNode;

	return (*head);

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
