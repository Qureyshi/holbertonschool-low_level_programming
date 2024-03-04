#include "main.h"
#include <stddef.h>
/**
 * _strchr- returns the length of a string
 * @s: string to evaluate
 * @c: string to evaluate
 *
 * Return: the length of the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
		;
	
	if (s[i] == c)
		return (s + i);

	return (NULL);
}
