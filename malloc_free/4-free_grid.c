#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees up the memory of the grid
* @grid: The pointer to the grid that needs freeing
* @height: The rows of arrays to free
*/
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		height--;
		free(grid[height]);
	}
	free(grid);
}
