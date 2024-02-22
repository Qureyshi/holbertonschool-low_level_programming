#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - Entry point.
 * @n:the int to check
 * Return: Always 0 (Success)
 */
print_sign(int n)
{

	if (n > 0)
		_putchar('+');
		return (1);
	else if (n < 0)
		 _putchar('-');
		return (-1);
	else if (n == 0)
		_putchar('0');
	        return (0);

	_putchar('\n');
}
