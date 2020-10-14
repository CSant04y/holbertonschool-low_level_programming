#include "holberton.h"
/**
 * *argstostr - this concatenates strings but with a new line
 * @ac: This is the argument count
 * @av: this is argument vector
 * Return: our char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int length, count2 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}
	ptr = malloc(length + sizeof(char) + ac + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, count2++)
		{
			ptr[count2] = av[i][j];
		}
		ptr[count2] = 10;
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}
