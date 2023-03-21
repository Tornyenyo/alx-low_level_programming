#include "dog.h"

/**
 * _init_dog - initialize a struct(type dog)
 * @d: pointer to sructure
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner
 *
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
