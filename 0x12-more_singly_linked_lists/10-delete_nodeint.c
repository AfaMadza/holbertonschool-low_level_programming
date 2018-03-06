#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * delete_nodeint_at_index - deletes node at index.
 *@head: double pointer to start of list.
 *@index: index whose node will be deleted.
 * Return: 1 for success or -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)/*if head needs to be deleted*/
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (; temp != NULL && i < index - 1; i++)/*iterate to node before index*/
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)/*for invalid index*/
		return (-1);
	next = temp->next->next;
	/*temp->next is the node we want to delete, so we need to store the*/
	  /*  pointer for the node after temp->next*/

	free(temp->next);/*delete node at index*/
	temp->next = next;/*set pointer that used to point to index to next*/
	return (1);
}
