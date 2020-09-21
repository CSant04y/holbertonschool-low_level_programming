#include "holberton.h"

/**
 * _islower - this checks for lowercase letters
 * @c: this is the char being fed in
 * Return: 0
 */

int _islower(int c)
{
	if (c < 123 && c > 97)
		return (1);
	else
		return (0);
}
