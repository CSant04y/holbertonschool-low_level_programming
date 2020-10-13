#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - this copies a string and allocated memory for it
 * @str: this is the string we want to copy
 * Return: return is a char
 */

char *_strdup(char *str)
{
	char *ptr;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0'; count++)
	{
		ptr[count] = str[count];
	}
	ptr[count] = '\0';
	return (ptr);
}
