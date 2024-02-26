#include "main.h"

/**
 * print_line - uppercase letters
 * @n: param
 *
 * Return: 0 or 1
 */
void print_line(int n)
{
	int i;

	if ( n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
	}
}
