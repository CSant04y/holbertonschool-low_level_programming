#include "holberton.h"
/**
 * _strlen - this returns the length of a string
 * @s: this is the pointer to a pointer
 * Return: itr
 */

int _strlen(char *s)
{
	int itr = 0;

	while (s[itr])
		itr++;

	return (itr);
}
