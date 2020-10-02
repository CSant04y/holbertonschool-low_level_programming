#include "holberton.h"
/**
 * *cap_string - This capitilizes the first letter of a word
 * @str: this is a sting pointer
 * Return: char pointer
 */
char *cap_string(char *str)
{
	char delim[] = " \t\n,;.!?\"(){}\0";
	char tmp = 0;
	int i;
	char *ptr = str;

	while (*str)
	{
		if (tmp == 1)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			tmp = 0;
		}
		for (i = 0; delim[i]; i++)
		{
			if (*str == delim[i])
				tmp = 1;
		}
		str++;
	}
	return (ptr);
}
