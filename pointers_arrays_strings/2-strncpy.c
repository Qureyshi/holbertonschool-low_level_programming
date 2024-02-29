#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: n param
 * Return: pointer to resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	dest[n] = '\0';

	return (dest);
}
