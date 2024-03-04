#include "main.h"
#include <stddef.h>
/**
 * _strpbrk- returns the length of a string
 * @s: string to evaluate
 * @accept: string to evaluate
 *
 * Return: the length of the string
 */
unsigned int _strpbrk(char *s, char *accept)
{
	int i, j;
	char* k;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
		for (j = 0; accept[j] != '\0' ; j++)
			if (s[i] == accept[j])
				k = &s[i];

	return (k);
}
