#include "main.h"

/**
 * swap_int - updates the value of the variable
 * the pointer points to to 98
 * @a: pointer to the variable to update
 * @b: pointer to the variable to update
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
