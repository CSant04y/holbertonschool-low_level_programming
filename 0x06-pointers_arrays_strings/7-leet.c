#include "holberton.h"
/**
 * *leet - this encodes a string into 1337
 * @str: string that is being encoded
 * Return: char pointer
 */
char *leet(char *str)
{
	int i, j;
	char lett[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lett[j]; j++)
		{
			if (str[i] == lett[j])
				str[i] = num[j];
		}
	}
	return (str);
}
