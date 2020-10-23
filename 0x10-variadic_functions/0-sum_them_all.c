#include "variadic_functions.h"
/**
 * sum_them_all - this function returns the sum of all of its paramters
 * @n: this is the const int that is referd to
 * Return: sum of all ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, j = 0;

	va_start(sum, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		j += va_arg(sum, int);
	va_end(sum);
	return (j);
}
