#include "holberton.h"
/**
 * _strcmp - this compares two strings
 * @s1: this is string one
 * @s2: string two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	return (s1[i] - s2[i]);
}
