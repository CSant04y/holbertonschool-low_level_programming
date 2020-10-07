#include "holberton.h"
/**
 * _print_rev_recursion - this prints a string backwards and recursevly
 * @s: this is a pointer to the beginning of the string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
