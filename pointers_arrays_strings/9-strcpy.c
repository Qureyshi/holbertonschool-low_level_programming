#include "main.h"

/**
 * _strcpy - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
