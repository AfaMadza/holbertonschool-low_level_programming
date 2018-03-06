#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 *@head: pointer to start of list.
 *@index: index of the node starting at 0.
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head != NULL; i++)

	{
		if (i == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
		}
	}
	return (NULL);

}
