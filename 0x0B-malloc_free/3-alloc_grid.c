#include "holberton.h"
/**
 * **alloc_grid - this returns a to a two demansional array of char
 * @width: this it the width of grid
 * @height: this it the height of the grid
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			while (h >= 0)
			{
				free(ptr[h]);
				h--;
			}
			free(ptr);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);
}
