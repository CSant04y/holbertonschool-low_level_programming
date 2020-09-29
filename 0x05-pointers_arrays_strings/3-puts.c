#include "holberton.h"
/**
 * _puts - this changes the index notation
 * @str: this is the pointer to the stirng
 * Return: 0
 */
void _puts(char *str)
{
	int itr = 0;

	while (str[itr])
	{
		_putchar(str[itr]);
		itr++;
	}
	_putchar(10);
}
