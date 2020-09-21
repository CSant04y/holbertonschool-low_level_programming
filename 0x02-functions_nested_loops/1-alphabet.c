#include "holberton.h"

/**
 * print_alphabet - funtion that prints Alphabet in lowercase
 * Return: no return
 */

void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
