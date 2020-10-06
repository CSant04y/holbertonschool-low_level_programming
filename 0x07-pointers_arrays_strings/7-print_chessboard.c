#include "holberton.h"
/**
 * print_chessboard - this print the chess board
 * @a: this is a pointer to an array
 *
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
