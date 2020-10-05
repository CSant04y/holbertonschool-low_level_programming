#include "holberton.h"
/**
 * _strspn - this in not sure what it does
 * @s: this is a pointer to bytes from accept
 * @accept: this is the letters we are
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cl;
	unsigned int lc;
	unsigned int counter = 0;

	for (cl = 0; s[cl] != '\0'; cl++)
	{
		for (lc = 0; accept[lc]; lc++)
		{
			if (s[cl] == accept[lc])
			{
				counter++;
			}
		}
		if (counter - 1 != cl)
		{
			break;
		}
	}
	return (counter);
}
