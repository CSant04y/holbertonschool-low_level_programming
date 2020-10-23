#include "variadic_functions.h"
/**
 * print_all - this prints anything that is thrown at it
 * @format: is the type spcifier that is needed
 * Return: No return:
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int itr = 0;
	char *ptr, p;

	va_start(ap, format);

	while (format != NULL && format[itr] != '\0')
	{
		p = format[itr];
		switch (p)
		{
		case 'c':
			printf("%c", (char) va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			ptr = va_arg(ap, char *);
			while (ptr == NULL)
				ptr = "(nil)";
			printf("%s", ptr);
			break;
		default:
			break;
		}
		if (format[itr + 1] != '\0' &&
		    (format[itr] == 'c' || format[itr] == 'i' ||
		     format[itr] == 'f' || format[itr] == 's'))
			printf(", ");
		itr++;
	}
	va_end(ap);
	printf("\n");
}
