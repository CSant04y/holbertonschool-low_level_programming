#include "holberton.h"
int _strlen(char *s);
int searchfor_pal(char *s, int strt, int end);

/**
 * is_palindrome - this checks strings to see if they are palidromes
 * @s: this is the refernce to string
 * Return: 1 id a pallindrome 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);

	return (searchfor_pal(s, 0, length - 1));

}
/**
 * _strlen - this finds the length of a string
 * @s:this is the tring pointer
 * Return: the length and increment the string pointer
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(++s));
	else
		return (0);
}
/**
 * searchfor_pal - this compares chars in a string
 * @s: this refernces string
 * @strt: this is the beginning of the string
 * @end:the end of the sting
 * Return: the function
 */
int searchfor_pal(char *s, int strt, int end)
{
	if (strt >= end)
		return (1);
	if (s[strt] != s[end])
		return (0);
	else
		return (searchfor_pal(s, strt + 1, end - 1));
}
