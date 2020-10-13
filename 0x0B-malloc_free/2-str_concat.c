#include "holberton.h"
/**
 * *str_concat - this concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = (_strlenr(s1) + _strlenr(s2));
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlenr - this find the length of a string recursevly
 * @s: this is a pointer to the beggining of the string in c
 * Return: size of a string
 */
int _strlenr(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlenr(s + 1));
}
