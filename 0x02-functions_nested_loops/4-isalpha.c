#include "holberton.h"

/**
 * _isalpha - this checks to see if a char is lower or uppercase
 * @c: this is the var being fed in
 * Return: 0
 */

int _isalpha(int c)
{
	if (c < 123 && c > 97)
		return (1);
	else if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
