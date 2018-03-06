#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * sum_listint - return the sum of all data (n) of a listint_t linked list.
 *@head: pointer to start of list.
 * Return: sum of data member.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
