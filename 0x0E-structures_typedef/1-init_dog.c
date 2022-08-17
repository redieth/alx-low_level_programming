#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d:pointer to a dog struct
 * @name: dog name
 * @age: dog's age
 * @owner: owner's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
