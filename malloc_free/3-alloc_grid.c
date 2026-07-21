#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Allocates a 2 dimensional grid of arrays to a pointer
* @width: The length of each row
* @height: How many rows there are
* Return: The completed grid of arrays
*/
int **alloc_grid(int width, int height)
{
	int row;
	int column;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	row = 0;
	while (row < height)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			while (row > 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		column = 0;
		while (column < width)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}
	return (grid);
}
