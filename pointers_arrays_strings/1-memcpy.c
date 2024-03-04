#include "main.h"

/**
 * _memcpy - returns the length of a string
 * @s: string to evaluate
 * @b: string to evaluate
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
