#include "holberton.h"
/**
 * *malloc_checked - this checks to see if space is allocated
 * @b: this the number they are passing us
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
