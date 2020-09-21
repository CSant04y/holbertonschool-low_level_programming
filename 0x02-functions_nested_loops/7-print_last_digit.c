#include "holberton.h"

/**
 * print_last_digit - this returns the last digit of a number
 * @a: is the digit that we are using to get the last digit
 * Return: is a
 */
int print_last_digit(int a)
{
	int ld;

	ld = a % 10;

	if (ld < 0)
	{
		ld = ld * -1;
		_putchar(ld + '0');
		return (ld);
	}
	if (ld > 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	if (ld == 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	return (0);
}
