#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * *_realloc - this reallocates memeory for new size
 * @ptr: this is the void pointer
 * @old_size: this is the old size
 * @new_size: this is the new size
 * Return: p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
		return (NULL);
	if (ptr)
	{
		_memcpy(p, ptr, old_size);
	}
	return (p);
}
/**
 * *_memcpy - this copies up to n amount of bytes
 * @dest: this is the destiantion that we are going to
 * @src: This is the source string
 * @n: n amount of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
