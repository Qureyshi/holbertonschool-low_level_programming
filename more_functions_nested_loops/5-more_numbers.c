#include "main.h"

/**
 * more_numbers - uppercase letters
 *
 * Return: 0 or 1
 */
void more_numbers(void)
{
	int c, j;

	for (j = 0; j < 10 ; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');

			_putchar(c % 10 + '0');
		}

	_putchar('\n');
	}
}
