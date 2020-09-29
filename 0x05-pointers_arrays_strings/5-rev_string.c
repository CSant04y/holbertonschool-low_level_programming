#include "holberton.h"

/**
 * rev_string - this reverses the string
 * @s: string s
 * Return: none
 */

void rev_string(char *s)
{
	char temp;
	char *e = s;

	while (*e)
		e++;
	e--;
	while (s < e)
	{
		temp = *e;
		*e = *s;
		*s = temp;
		e--;
		s++;
	}
}
