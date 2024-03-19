#include "function_pointers.h"

/**
 * array_iterator - Print a name from a function pointer
 * @array: char string
 * @size: function pointer that takes a string argument
 * @action: function pointer that takes a string argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{	
	size_t i;

	for (i=0; i < size; i++)
		action(array[i]);
}
