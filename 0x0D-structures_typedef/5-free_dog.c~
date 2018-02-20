#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - free all the dogs
* @d: pointer to dog struct.
* Return: None.
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
