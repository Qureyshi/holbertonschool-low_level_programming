#include "main.h"
#include <stdlib.h>

/**
 * str_concat - create an array of chars, and initialize with specific char
 * @s1: size of array
 * @s2: parameter
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k, b, c;

	c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i + j) * sizeof(*a) + 1);

	if (a == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		a[k] = s1[k];

	for (b = i; b < i + j; b++, c++) 
		a[b] = s2[c];

	a[i + j] = '\0';

	return (a);
}
