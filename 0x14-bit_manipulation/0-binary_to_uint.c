#include "holberton.h"
/**
 * binary_to_uint - this transforms the code to binary to unsignes int
 * @b: this is a pointer to string
 * Return: is the value of i. Zero if said integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int count = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		i <<= 1;
		if (b[count] != '1' && b[count] != '0')
			return (0);
		i += b[count] - '0';
		count++;
	}

	return (i);
}
