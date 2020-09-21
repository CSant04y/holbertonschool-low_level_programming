#include "holberton.h"

/**
 * _abs - computes absolute value of an int
 * @int: this is the integer we are testing
 * Return: is the ints postive value
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else if (a > 0)
		return (a);
	else
		return (0);
}
