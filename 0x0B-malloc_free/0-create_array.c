#include "holberton.h"
/**
 * *create_array - this creates an array of chars
 * @size: this is the size of the array
 * @c: this is the chars
 * Return: is char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int itr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (itr = 0; itr < size; itr++)
		ptr[itr] = c;
	return (ptr);
}
