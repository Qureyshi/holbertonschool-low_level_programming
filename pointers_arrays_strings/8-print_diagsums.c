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

	for (i = 0; i <= size * size; i++)
	{
		sum1 += a[i];
		i = i + size + 1;

	}	
	
	for (j = 0; j < (size * size - 1); j++)
	{
		sum2 += a[j];
		j = j + size -1;
	}

	printf("%d, %d\n", sum1, sum2);
}
