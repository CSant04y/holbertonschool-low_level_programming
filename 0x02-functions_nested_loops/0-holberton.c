#include "holberton.h"

/**
 * main - This prints out holberton followed by a new line
 * Return: 0
 */

int main(void)
{
	char str[] = "Holberton";
	int count = 0;

		while (str[count])
		{
			_putchar(str[count]);
			count++;
		}
		_putchar('\n');
	return (0);
}
