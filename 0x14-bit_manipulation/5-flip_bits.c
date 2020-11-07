#include "holberton.h"
/**
 * flip_bits - this flips the bits
 * @n: int n
 * @m: m
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;
	int count = 0, m1 = 0, n1 = 0;
	int len = (sizeof(unsigned long int) * 8);

	while (count < len)
	{
		n1 = (n >> count) & 1;
		m1 = (m >> count) & 1;

		if (m1 != n1)
			result++;
		count++;
	}
	return (result);
}
