#include "holberton.h"
/**
 * main - this is the main program that runs everything
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this is 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	while (argv[0])
	{
		printf("%s\n", argv[0]);
		exit(0);
	}
	return (0);
}
