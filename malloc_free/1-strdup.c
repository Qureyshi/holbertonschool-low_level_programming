#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create an array of chars, and initialize with specific char
 * @str: size of array
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != "\0"; i++)
		;

	a = malloc(i * sizeof(*a) + 1);

	if (a == NULL)
		return (NULL);

	for (c = 0; c <= i; c++)
		a[c] = str[c];

	return (a);
}
