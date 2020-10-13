#include "holberton.h"
/**
 * free_grid - this frees the 2-dimensional array
 * @grid: this is the double array grid
 * @height: this is the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;
	if (grid[height] == NULL)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
