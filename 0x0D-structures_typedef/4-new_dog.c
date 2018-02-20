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

	if (name == NULL || owner == NULL)
		return (NULL);

	n = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n == NULL)
		return (NULL);

	o = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = '\0';

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;
	return (new_dog);

}
/**
 * _strlen - returns length of a string
 *
 * @s: pointer to string whose length will be returned
 * Return: None
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
