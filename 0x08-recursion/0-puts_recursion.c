#include "holberton.h"
/**
 * _puts_recursion - this prints a string follow
 * @s: this is the string that they are passing us
 * Reuturn: nothing since its void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
