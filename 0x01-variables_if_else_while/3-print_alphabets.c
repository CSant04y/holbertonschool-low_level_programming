#include <stdio.h>

/**
 * main - This prints the lowercase and upper case alphabet
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (b = 97; b <= 122; b++)
		putchar(b);
	for (a = 65; a <= 90; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
