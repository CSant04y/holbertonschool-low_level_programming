#include <stdio.h>
#include "holberton.h"

/**
 * print_array - we are printing an array of ints
 * @a: this a a pointer to int
 * @n: this is an elements of an array of ints
 * Return: none
 */

void print_array(int *a, int n)
{
	int cy = 0;

	while (cy < n)
	{
		printf("%d", a[cy]);
		if (cy < n - 1)
			printf(", ");
		cy++;
	}
	putchar (10);
}
