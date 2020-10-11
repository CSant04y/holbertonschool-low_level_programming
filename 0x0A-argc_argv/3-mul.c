#include <stdio.h>
#include <stdlib.h>
/**
 * main - this multiplies two ints
 * @argc: this is the args in the command line
 * @argv: this is the string vector
 * Return: 0, and reult
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
