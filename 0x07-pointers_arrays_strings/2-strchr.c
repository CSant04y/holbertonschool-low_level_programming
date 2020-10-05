#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - this is a function that locates in a string
 * @s: is a string in c
 * @c: is the char that we are looking for
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0' ; itr++)
	{
		if (s[itr] == c)
			return (&s[itr]);
	}
	if (c == '\0')
		return (&s[itr]);

	else
		return (NULL);
}
