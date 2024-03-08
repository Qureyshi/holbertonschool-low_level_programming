#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums: returns the length of a string
 * @a: string
 * @size: string
 *
 * Return: the length of the string
 */
void print_diagsums(int *a, int size)
{	int sum1, sum2, i, j;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];

	}	
	
	for (j = 0; j < size; j++)
	{
		sum2 += a[j][size - 1 - i];
	}

	printf("%d, %d\n", sum1, sum2);
}
