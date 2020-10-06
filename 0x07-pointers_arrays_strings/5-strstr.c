#include "holberton.h"
/**
 * *_strstr - write a function that locates a substring
 * @haystack: this is string
 * @needle: this is a substring
 * Return: a char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, itr;

	for (i = 0; haystack[i]; i++)
	{
		for (itr = 0; needle[itr]; itr++)
		{
			if (haystack[i + 1] == *needle)
				return (&haystack[i + 1]);
		}
		if (*needle == 0)
			return (&haystack[i + 1]);
	}

	return (NULL);
}
