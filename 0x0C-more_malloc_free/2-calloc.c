#include "holberton.h"
/**
 * *_calloc - this allocates memory for an array
 * @nmemb: this is the number of elements
 * @size: is the size in bites of each of the elements
 * Return: is nothing since its a void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int itr = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (itr < (nmemb * size))
	{
		ptr[itr] = '\0';
		itr++;
	}
	return (ptr);
}
