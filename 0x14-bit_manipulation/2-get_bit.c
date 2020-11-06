#include "holberton.h"
/**
 * get_bit - this returns the value of a bit at a given index
 * @n: The number being passed in and compared to index
 * @index: The index of the array being passed in
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
