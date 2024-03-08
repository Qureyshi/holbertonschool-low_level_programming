#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr- returns the length of a string
 * @haystack: string to evaluate
 * @needle: string to evaluate
 *
 * Return: the length of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
