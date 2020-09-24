#include "holberton.h"
/**
 * print_square - this prints a square in #
 * @size: this is the size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int row, cl;

	if (size > 0)
	{
		for(row = 0; row < size; row++)
		{
			for(cl = 0; cl < size; cl++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
