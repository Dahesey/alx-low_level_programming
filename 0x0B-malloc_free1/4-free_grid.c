/**
 * free_grid - frees memory allocated to grid in previous task
 *
 * Author - Dahesey
 *
 * @grid: columns and rows
 *
 * @height: height of grid
 *
 * Return:
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
