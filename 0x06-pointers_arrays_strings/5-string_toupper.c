#include "holberton.h"
/**
 * *string_toupper - this chnages the string to suppercase letters
 * @str: this is the string being fed in
 * Return: nothing
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
