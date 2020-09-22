#include "holberton.h"

/**
 * print_to_98 - this prints all the natural number to 98
 * @n: this is where we are starting from
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
