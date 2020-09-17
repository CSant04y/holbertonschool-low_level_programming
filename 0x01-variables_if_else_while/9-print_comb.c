#include <stdio.h>

/**
 * main - this program prints 0-9 seprated with commas
 * Return: 0
 */

int main(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
