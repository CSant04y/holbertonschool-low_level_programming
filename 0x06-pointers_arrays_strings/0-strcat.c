#include "holberton.h"
/**
 * *_strcat - this is our function that concatonates a string
 * @dest: this is the string to be concatenated
 * @src: this is the string that will be concatenated
 * Return: the string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	char *s = src;

	while (*ptr)
		ptr++;
	while (*s)
	{
		*ptr = *s;
		s++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
