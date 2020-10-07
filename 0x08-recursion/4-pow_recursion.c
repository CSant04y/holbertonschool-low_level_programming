#include "holberton.h"
/**
 * _pow_recursion - this find the power of x to y
 * @x: this is the base
 * @y: this is the exponet
 * Return: the power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
