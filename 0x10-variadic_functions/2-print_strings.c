#include "variadic_functions.h"
/**
 * print_strings - this is function prints strings
 * @separator: this is the commas in bewteen strings
 * @n: this is the number of strings passed
 * Return: No return, void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int num;
	char *p;

	va_start(ap, n);
	for (num = 0; num < n; num++)
	{
		p = va_arg(ap, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator != NULL && num < n - 1)
			printf("%s", separator);
	}
	putchar(10);
	va_end(ap);
}
