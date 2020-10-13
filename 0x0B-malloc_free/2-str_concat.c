#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - this concatanates another string to another
 * @s1: String 1
 * @s2: string 2
 * Return: return is a char
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int count2 = 0, count1 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	ptr = malloc(sizeof(char) * (count1 + count2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= count1 - 1; i++)
		ptr[i] = s1[i];
	for (j = 0; j <= count2; j++)
		ptr[j + i] = s2[j];
	return (ptr);
}
