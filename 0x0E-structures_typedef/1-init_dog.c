#include "dog.h"
/**
 * init_dog - this is a funtion that initilizes a var
 * @name: the name of the dog
 * @age: this is the age of the dog
 * @d: this is apointer to struct
 * @owner: this is the owner
 * Return: is void
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
