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
	while (b[count] == '0' || b[count] == '1')
	{
		i <<= 1;
		i += b[count] - '0';
		count++;
	}
	if ((b[count] != '1' || b[count] != '0') && b[count] != '\0')
	{
		return (0);
	}
	return (i);
}
