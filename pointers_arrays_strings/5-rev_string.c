#include "main.h"

/**
 * rev_string - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int i, len, j;
	char tmp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	j = 0;
	while (j <= i)
	{
		tmp[j] = s[--len];
		j++;
	}
}
