#include "main.h"

/**
 * print_square - uppercase letters
 * @size: param
 *
 * Return: 0 or 1
 */
void print_dquare(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size ; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
