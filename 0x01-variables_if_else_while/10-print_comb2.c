#include <stdio.h>

/**
 * main - this prints 0 - 99 seperated by comma and space
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 99; num++)
	{
		putchar (num / 10 + '0');
		putchar (num % 10 + '0');
		if (num <= 98)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
