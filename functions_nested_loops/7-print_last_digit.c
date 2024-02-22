#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - Entry point.
 * @n: last digits
 * Return: Always 0 (Success)
 */
int print_last_digit(int n);
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}
