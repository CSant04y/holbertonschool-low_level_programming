#include "holberton.h"
int find_sqrt(int num, int count);
/**
 * _sqrt_recursion - find the Square root of a number
 * @n: this is the number we are checking for the square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
/**
 * find_sqrt - this find the square root with recursion
 * @num: this is the number we are trying to find the square root of
 * @count: this number is the numbers we are testing
 * Return: the count
 */
int find_sqrt(int num, int c)
{
	if (c * c < num)
	{
		return (find_sqrt(num, c + 1));
	}
	if (c * c > num)
		return (-1);
	if (c * c == num)
		return (c);
	return (find_sqrt(num, c + 1));
}
