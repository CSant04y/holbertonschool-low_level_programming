#include "holberton.h"

/**
 * print_line - this prints a line with dashes
 * @n: integer n being piped in
 * Return: nothing
 */
void print_line(int n)
{
	int r = 0;

		if (n > 0)
		{
			while (r < n)
			{
				_putchar('_');
				r++;
			}
		}
		_putchar('\n');
}
