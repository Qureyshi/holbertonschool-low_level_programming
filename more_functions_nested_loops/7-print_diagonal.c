#include "main.h"

/**
 * print_diagonal - uppercase letters
 * @n: param
 *
 * Return: 0 or 1
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < i ; j++)
			 _putchar(' ');

		_putchar('\\');
	}

	_putchar('\n');
}
