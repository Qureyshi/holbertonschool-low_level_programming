#include "main.h"

/**
 * puts2(char *str)- returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void puts2(char *str)
{
	int i, len, j, k;
	char c;

	len = 0;

	while (str[k] != '\0')
	{
		len++;
	}

	for (i = 0, i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
