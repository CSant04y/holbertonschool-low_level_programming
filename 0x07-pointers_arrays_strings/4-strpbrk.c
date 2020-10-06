#include "holberton.h"
/**
 * *_strpbrk - this finds the first occurence of a string
 * @s: this is the occurrence of strings
 * @accept: this is the occurence of the string
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int cy;
	unsigned int itr;

	for (cy = 0; s[cy] != '\0'; cy++)
	{
		for (itr = 0; accept[itr]; itr++)
			if (s[cy] == accept[itr])
				return (&s[cy]);
	}
	return (0);
}
