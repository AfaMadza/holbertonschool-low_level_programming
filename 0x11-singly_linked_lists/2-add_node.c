#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - prints all the elements of a list_t list.
 *@head: double pointer to start of list.
 *@str: string in node that needs to be added to start of list.
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (temp->str[len] != '\0')
		len++;
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
