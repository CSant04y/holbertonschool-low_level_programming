#include <stdio.h>

/**
 * main - This prints base 16
 * Return: 0
 */

int main(void)
{
	int hex = 97, he = 48;

	while (he <= 57)
	{
		putchar(he);
		he++;
	}
	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
