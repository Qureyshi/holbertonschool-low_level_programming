#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _isalpha - Entry point.
 * @c: the character to check
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	_putchar('\n');
}
