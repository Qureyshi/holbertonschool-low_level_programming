#include "main.h"

/**
 * _print_rev_recursion - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}

