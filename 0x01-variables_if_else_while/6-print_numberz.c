#include <stdio.h>

/**
 * main - This prints out 0-9 with only putchar
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
