#include "holberton.h"

/**
 * _isupper - This checks to see if a char is uppercase
 * @c: this is the chars ascii value being checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
