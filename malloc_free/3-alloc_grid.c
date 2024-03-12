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
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int**)malloc(height * sizeof(int*));
	for (k = 0; k < width; k++)
		a[k] = (int*)malloc( width* sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
	            a[i][j] = 0;
	
	return (a);
}
