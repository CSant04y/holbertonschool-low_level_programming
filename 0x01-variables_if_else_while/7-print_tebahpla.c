#include <stdio.h>

/**
 * main - This code prints the alpabet in reverse
 * Return: 0
 */

int main(void)
{
	int alph = 122;

	while (alph >= 97)
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
