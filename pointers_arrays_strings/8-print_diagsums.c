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

	while (i <= (size * size))
	{
		sum1 += a[i];
		i = i + size + 1;

	}	
	
	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size -1;
	}

	printf("%d, %d\n", sum1, sum2);
}
