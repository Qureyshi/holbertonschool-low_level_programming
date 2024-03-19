#include "function_pointers.h"

/**
 * int_index - Print a name from a function pointer
 * @array: char string
 * @size: function pointer that takes a string argument
 * @cmp: function pointer that takes a string argument
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
