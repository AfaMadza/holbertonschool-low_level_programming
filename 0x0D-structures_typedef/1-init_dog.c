#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - initializes a variable of trype struct dog.
* @d: pointer to struct dog
* @age: Age of dog
* @owner: Owner of dog.
* @name: name of dog.
* Return: None.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
