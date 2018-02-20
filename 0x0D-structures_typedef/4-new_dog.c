#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog - creates a struct called new_dog
* @name: name of new_dog.
* @age: age of new_dog;
* @owner: owner of new dog;
* Return: None.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i;
	char *n;
	char *o;
	dog_t *new_dog;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	n = malloc(sizeof(name));
	if (n == NULL)
	{
		return (NULL);
	}
	o = malloc(sizeof(owner));
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = '\0';
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;
	return (new_dog);

}
