#include "holberton.h"
int prime_chk(int a, int c);
/**
 * is_prime_number - this check to see ia number is prime
 * @n: the number they want us to check to see if it is prime
 * Return: 1 if is prime 0 is not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_chk(n, n - 1));
}
/**
 * prime_chk - this checks the prime number recursivly
 * @a: number we are checking
 * @c: this is a - 1
 * Return: either on or zero
 */
int prime_chk(int a, int c)
{
	if (c == 1)
		return (1);
	if (a % c == 0)
		return (0);
	else
		return (prime_chk(a, c - 1));
}
