#include "holberton.h"
/**
 * *_strncpy - this function copies a string
 * @dest: this is the dest string
 * @src: this is the source string
 * @n: this is up to n bytes
 * Return: the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cycle;

	for (cycle = 0; cycle < n && src[cycle] != '\0'; cycle++)
	{
		dest[cycle] = src[cycle];
	}
	for (; cycle < n; cycle++)
	{
		dest[cycle] = '\0';
	}
	return (dest);
}
