#include "main.h"
#include <stddef.h>
/**
 * _strspn- returns the length of a string
 * @s: string to evaluate
 * @:ccept string to evaluate
 *
 * Return: the length of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
		for (j = 0; accept[j] != '\0' ; j++)
			if (s[i] == accept[j])
				k++;

	return (k);
}
