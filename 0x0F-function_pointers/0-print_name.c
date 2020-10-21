#include "function_pointers.h"
/**
 * print_name - this passes a string to this function and we return to func *
 * @name: is the string is being passed to us
 * @f: the is a function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!f)
		return;
	f(name);
}
