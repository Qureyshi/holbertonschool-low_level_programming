#include "main.h"

/**
 * print_numbers - uppercase letters
 * @c: character to check
 * Return: 0 or 1
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
