#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create an array of chars, and initialize with specific char
 * @width: size of array
 * @height: parameter
 * Return: char pointer to malloc created memory address or NULL if error
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, c, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int**)malloc(height * sizeof(int*));

	for (k = 0; k < height; k++)
	{
		a[k] = (int*)malloc( width* sizeof(int));

		if (a[k] == NULL)
		{
			for (b = k; b >= 0; b--)
			{
				free(a[b]);
			}
			free(a);
			return (NULL);
		}
	}

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
	            a[i][j] = 0;

	for (c = 0; c < height; c++)
		free(a[c]);

	free(a);

	return (a);
}
