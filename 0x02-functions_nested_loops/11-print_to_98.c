#include "holberton.h"

/**
 * print_to_98 - this prints all the natural number to 98
 * @n: this is where we are starting from
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
	while (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else if (n == 98)
			printf("%d\n", n);
		n++;
	}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			n--;
			printf("%d, ", n);
		}
	}
}
