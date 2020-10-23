#include "variadic_functions.h"
/**
 * print_numbers - this prints the numbers in the list
 * @separator: this sperates the numbers
 * @n: n it the elements in the variadic func
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	va_list ap;

	va_start(ap, n);

	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && num != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
