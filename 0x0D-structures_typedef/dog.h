#ifndef DOG_H
#define DOG_H

/**
* struct dog - defines a struct called dog
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog.
* Description: See above.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);

#endif
