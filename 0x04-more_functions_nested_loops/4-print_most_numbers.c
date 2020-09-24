#include "holberton.h"
/**
 * print_most_numbers - This prints 0-9 without 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar(10);
}
