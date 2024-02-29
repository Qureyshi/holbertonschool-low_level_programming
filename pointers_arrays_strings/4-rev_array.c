#include "main.h"

/**
 * reverse_array - concatenate two strings
 * @a: char string to concatenate to
 * @n: char string
 *
 * Return: pointer to resulting string `dest`
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); j > i; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
