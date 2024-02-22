#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - Entry point.
 * @n: number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a, b;
	
	if (n <= 98)
		for (a = n ; a <= 98 ; a++)
		{	
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}	
	else if (n >= 98)
                for (b = n ; b >= 98 ; b--)
		{	
	                _putchar(b + '0');
			_putchar(',');
			_putchar(' ');
		}	
}
