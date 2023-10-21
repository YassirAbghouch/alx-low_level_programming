#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* init_dog - prints a struct dog
* @d: struct dog to print
* @name: dog name.
* @age: dog age.
* @owner: dog owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
