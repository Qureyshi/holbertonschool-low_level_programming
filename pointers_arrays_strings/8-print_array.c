#include <stdio.h>
#include "main.h"

/**
 * print_array - charreturns the length of a string
 * @a: string to evaluate
 * @n: string to evaluate
 *
 * Reiturn: the length of the string
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0 ; j < n ; j++)
	{
		if (j == 0)
			printf("%d", a[j]);
		else
			printf(", %d", a[j]);
	}

	printf("\n");
}

