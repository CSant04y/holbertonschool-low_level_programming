#include "holberton.h"

/**
 * _isdigit - This looks to see if char is a digit
 * @c: this is the chars ascii value being checked
 * Return: 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
