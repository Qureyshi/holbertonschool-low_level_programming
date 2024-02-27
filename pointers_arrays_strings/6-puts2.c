#include "main.h"

/**
 * puts2(char *str)- returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
