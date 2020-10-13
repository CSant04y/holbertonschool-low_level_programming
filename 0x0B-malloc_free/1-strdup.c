#include "holberton.h"
/**
 * *_strdup - this duplicates a string and allocated space and memeory for it
 * @str: pointer to the string that is passed
 * Return: is our char pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int count = 0;

	if (*str == 0)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; str[count]; count++)
		ptr[count] = str[count];
	ptr[count] = '\0';
	return (ptr);
}
