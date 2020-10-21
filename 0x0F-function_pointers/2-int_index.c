#include "function_pointers.h"
/**
 * int_index - this looks for an int
 * @array: this is the array
 * @size: this is the size of the array
 * @cmp: this the function that compares
 * Return: is -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	while (itr < size)
	{
		if (cmp(array[itr]) != 0)
		{
			return (itr);
		}
		itr++;
	}
	return (-1);
}
