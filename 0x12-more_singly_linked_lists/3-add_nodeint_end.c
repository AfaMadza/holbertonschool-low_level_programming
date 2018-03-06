#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - add a node to the end of a list.
 *@head: double pointer to start of list.
 *@n: int member for node to be added.
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *tail;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)/*NULL check to see if memory was allocated for temp*/
		return (NULL);

	temp->n = n;      /*Assign length to len member in struct*/
	temp->next = NULL;/*Temp will be last node, so the next must be NULL*/
	tail = *head;        /*Used to traverse nodes in later step*/

	if (*head == NULL)  /*If linked list is empty, make temp head*/
	{
		*head = temp;
		return (temp);
	}
	else
	{
		while (tail->next != NULL)/*Otherwise traverse to last node*/
		{
			tail = tail->next; /*Remove the NULL for last node*/
		}
	}
	tail->next = temp;/*Make next node equal to temp, which will now be last*/
	return (temp);
}
