#include "holberton.h"
/**
 * factorial - this find the factorial of n
 * @n: this is the integer that theu are wanting us to check
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
