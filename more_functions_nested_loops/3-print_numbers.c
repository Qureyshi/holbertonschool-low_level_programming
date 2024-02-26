#include "main.h"

/**
 * print_numbers(void) - uppercase letters
 * @a: character to check
 * @b: character to check
 * Return: 0 or 1
 */
void print_numbers(void)
{	
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
