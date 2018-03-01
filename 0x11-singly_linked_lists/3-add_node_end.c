#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node to the end of a list.
 *@head: double pointer to start of list.
 *@str: string in node that needs to be added to end of list.
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp, *tail;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)/*NULL check to see if memory was allocated for temp*/
		return (NULL);

	temp->str = strdup(str); /*Duplicate string to temp variable*/

	if (temp->str == NULL)  /*Since strdup mallocs, check for NULL*/
	{
		free(temp);
		return (NULL);
	}
	while (temp->str[len] != '\0')/*Find length of string*/
		len++;
	temp->len = len;      /*Assign length to len member in struct*/
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
