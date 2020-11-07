#include "holberton.h"
/**
 * clear_bit - This sets the bit at a given index to 0
 * @n: this is a pointer to a number
 * @index: this is the index that they want us to set the bit
 * Return: bit that is set
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	var = ~(1 << index);

	*n = *n & var;
	return (1);
}
