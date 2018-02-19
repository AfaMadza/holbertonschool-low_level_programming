#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - prints struct dog.
* @d: pointer to struct dog
* Return: None.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)\n");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
