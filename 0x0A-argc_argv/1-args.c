#include "holberton.h"
/**
 * main - this program finds the number of args passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
