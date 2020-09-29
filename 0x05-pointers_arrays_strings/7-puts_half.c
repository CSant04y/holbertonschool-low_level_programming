#include "holberton.h"
/**
 * puts_half - this prints the second half of a string
 * @str: this is a pointer to a string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, count;

	len = _strlen(str);
	if (len % 2 == 0)
		count  = len / 2;
	else
		count = (len + 1) / 2;
	while (count < len)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar(10);
}

/**
 * _strlen - This finds the length of a string
 * @s: char pointer
 * Return: itr
 */
int _strlen(char *s)
{
	int itr = 0;

	while (s[itr])
		itr++;

	return (itr);
}
