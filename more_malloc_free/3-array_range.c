#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocate memory with malloc
 * @min: unsigned int type
 * @max: unsigned int type
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
