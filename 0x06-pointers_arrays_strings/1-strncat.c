#include "holberton.h"
/**
 * *_strncat - this concatenates two strings up until n bytes
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this is the ammount of bytes
 * Return: none
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest, *s = src;
	int itr = 0;

	while (*d)
		d++;
	for (; *s; s++, d++, itr++)
	{
		if (itr < n)
			*d = *s;
		else
			return (dest);
	}
	*d = '\0';
	return (dest);
}
