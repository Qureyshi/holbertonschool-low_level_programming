#include "main.h"

/**
 * rev_string - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

