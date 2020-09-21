#include "holberton.h"

/**
 * print_alphabet_x10 - funtion that prints Alphabet in lowercase ten tims
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int alph, count;

	for (count = 0; count <= 9; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
