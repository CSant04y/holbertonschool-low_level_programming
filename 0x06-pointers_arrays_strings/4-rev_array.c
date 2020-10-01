#include "holberton.h"
/**
 * reverse_array - this reverses the array
 * @a: this is a pointer
 * @n: this is size of array divided by size of int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int *ptr = a, tmp, itr = 0;

	for (itr = 0; itr < (n - 1); itr++)
		ptr++;
	for (itr = 0; itr <= n; itr++)
		while (a < ptr)
		{
			tmp = *a;
			*a = *ptr;
			*ptr = tmp;
			a++;
			ptr--;
		}
}
