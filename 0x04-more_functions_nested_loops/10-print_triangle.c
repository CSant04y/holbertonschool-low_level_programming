#include "holberton.h"
/**
 * print_triangle - This prints a triangle with the #
 * @size: this is the size of the trangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' ');
			for (; j <= size; j++)
				_putchar('#');
			_putchar(10);
		}
}
