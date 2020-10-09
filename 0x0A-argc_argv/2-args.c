#include "holberton.h"
/**
 * main - this program prints all the arguments it recives
 * @argc: argument count
 * @argv: the agrument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	for (; argc > 0 ; argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
