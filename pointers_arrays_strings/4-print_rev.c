#include "main.h"

/**
 * print_rev - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int i, len, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0 ; j--)
		_putchar(s[j]);

	_putchar('\n');
}
