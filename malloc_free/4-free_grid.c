#include "main.h"
#include <stdlib.h>

/**
 * free_grid - alize with specific char
 * @grid: size of array
 * @height: parameter
 * Return: char pointer to malloc created memory address or NULL if error
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
