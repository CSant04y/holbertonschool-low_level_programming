#include "holberton.h"
/**
 * *_memcpy - this copies up to n amount of bytes
 * @dest: this is the destiantion that we are going to
 * @src: This is the source string
 * @n: n amount of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
