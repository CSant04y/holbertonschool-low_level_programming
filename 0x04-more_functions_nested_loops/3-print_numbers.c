#include "holberton.h"

/**
 * print_numbers - this prints 0-9
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar(10);
}
