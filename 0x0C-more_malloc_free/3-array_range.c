#include "holberton.h"
/**
 * array_range - this creates an array of integers
 * @min: this is minumum number of numbers
 * @max: this is the max number of
 * Return: is int
 */
int *array_range(int min, int max)
{
	int *ptr, itr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (itr = 0; min <= max; itr++, min++)
		ptr[itr] = min;
	return (ptr);
}
