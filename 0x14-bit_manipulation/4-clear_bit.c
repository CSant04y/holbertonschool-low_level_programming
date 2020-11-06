#include "holberton.h"
/**
 * clear_bit - This sets the bit at a given index to 0
 * @n: this is a pointer to a number
 * @index: this is the index that they want us to set the bit
 * Return: bit that is set
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (1 >> index) | *n;
	return (1);
}
