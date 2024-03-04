#include "main.h"

/**
 * _memset - returns the length of a string
 * @s: string to evaluate
 * @b: string to evaluate
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return s;
}
