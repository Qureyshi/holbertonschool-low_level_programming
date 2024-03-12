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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc((width * height) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		ptr[i] = 0;

	return (a);
}
