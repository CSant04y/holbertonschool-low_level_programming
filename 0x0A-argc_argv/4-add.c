#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - this multiplies two ints
 * @argc: this is the args in the command line
 * @argv: this is the string vector
 * Return: 0, and reult
 */

int main(int argc, char **argv)
{
	int counter = 1;
	int counter2 = 0;
	int total = 0;

	while (counter < argc)
	{
		counter2 = 0;
		while (argv[counter][counter2] != '\0')
		{
			if (!isdigit(argv[counter][counter2]))
			{
				printf("Error\n");
				return (1);
			}
			counter2++;
		}
		counter++;
	}
	counter = 1;
	while (counter < argc)
	{
		total += atoi(argv[counter]);
		counter++;
	}
	printf("%d\n", total);
	return (0);
}
