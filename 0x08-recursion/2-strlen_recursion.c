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
