#include "holberton.h"
/**
 * print_rev - this prints a string in reverse
 * @s: this is pointer to string s
 * Return: nothing
 */
void print_rev(char *s)
{
	int cy = 0;

	while (s[cy] != '\0')
	{
		cy++;
	}
	cy--;
	while (cy >= 0)
	{
		_putchar(s[cy]);
		cy--;
	}
	_putchar('\n');
}
