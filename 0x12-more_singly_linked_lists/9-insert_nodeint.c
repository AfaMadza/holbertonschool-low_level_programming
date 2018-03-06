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
	listint_t *temp2;
	listint_t *temp1;

	if (*head == NULL)
		return (0);

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;

	if (n == 1 || n == 0)/*if inserting at head*/
	{
		temp1->next = *head;
		*head = temp1;
		return (temp1);
	}
	temp2 = *head;

	for (; i < idx - 2; i++)/*idx - 2 iterates to node before idx*/
	{
		temp2 = temp2->next;
	}
	if (i == idx - 2)
	{
		temp1->next = temp2->next;
		temp2->next = temp1;
		return (temp2);
	}
	return (NULL);/*if we reach this point, then idx is invalid*/

}
