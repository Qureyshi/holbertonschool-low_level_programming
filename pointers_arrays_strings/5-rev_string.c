#include "main.h"

/**
 * rev_string - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i, len, j, k;
	char c;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	len = k;

	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
