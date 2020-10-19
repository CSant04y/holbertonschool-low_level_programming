#include "dog.h"
/**
 * free_dog - this frees the code from task 5
 * @d: this is a pointer to the struct
 * Return: is nothing since void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
