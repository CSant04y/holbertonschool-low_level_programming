#include "holberton.h"
/**
 * _strlen_recursion - this find the length of a string recursevly
 * @s: this is a pointer to the beggining of the string in c
 * Return: size of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * *string_nconcat - this concatenates your string up to n bytes
 * @s1: this is string1
 * @s2: string 2
 * @n: this is n amount of bytes
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int itr, count1 = 0, len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen_recursion(s1);

	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (itr = 0; s1[itr]; itr++, count1++)
		ptr[count1] = s1[itr];

	for (itr = 0; s2[itr] && itr < n; count1++, itr++)
		ptr[count1] = s2[itr];

	ptr[count1] = '\0';

	return (ptr);
}
