#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocate memory with malloc
 * @s1: unsigned int type
 * @s2: unsigned int type
 * @n: unsigned int type
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2, sign, i, j;

	sign = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + sign + 1));
	}

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < sign; j++)
		ptr[i++] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
