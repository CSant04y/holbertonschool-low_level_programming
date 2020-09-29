#include "holberton.h"
/**
 * put2 - this function prints every other number
 * @str: this is a pointer to the string
 * Return: nothing
 */
void puts2(char *str)
{
	int itr = 0;

	while (str[itr])
	{
		if (itr % 2 == 0)
			_putchar(str[itr]);
		itr = itr + 2;
	}
	_putchar(10);
}
