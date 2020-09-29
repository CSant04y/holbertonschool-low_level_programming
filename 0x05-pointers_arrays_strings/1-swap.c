#include "holberton.h"
/**
 * swap_int - this swaps integers with other integers
 * @a: this is a pointer to a number
 * @b: this is a pointer to a number
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
