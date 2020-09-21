#include "holberton.h"
/**
 * print_sign - This function prints the sign of the number
 * @n: this is the char that we are testing
 * Return: is zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
