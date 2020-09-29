#include "holberton.h"
/**
 * puts2 - this prints every other char
 * @str: this is the string
 * Return: nothing
 */

void puts2(char *str)
{
	int cyl = 0;

	while (*str != '\0')
	{
		if (cyl % 2 == 0)
			_putchar(*str);
		str++;
		cyl++;
	}
	_putchar(10);
}
