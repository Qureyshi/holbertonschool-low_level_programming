#include "main.h"

/**
 * -puts_half charreturns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (j = (len / 2) + 1 ; str[j] != '\0'; j++)
		_putchar(str[j]);
	}

	_putchar('\n');
}
