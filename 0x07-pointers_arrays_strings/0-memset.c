#include "holberton.h"
/**
 * *_memset - This Function fills up memory with a constant byte
 * @s: pointer to begining of string
 * @b: this is value that holds a constant byte
 * @n: this is the ammount of bytes we want to copy to
 * Return: s point to the main function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		s[itr] = b;
	}
	return (s);
}
