#include "holberton.h"
/**
 * print_diagonal - this prints the slashes in diagonal format
 * @n: this is the number of slashes
 * Return: 0
 */
void print_diagonal(int n)
{
	int sp = 0;
	int row = 0;

	if (n > 0)
	{
		while (row < n)
		{
			sp = 0;
			while (sp < row)
			{
				_putchar(' ');
				sp++;
			}
			row++;
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
