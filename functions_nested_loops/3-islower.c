#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * -islower.c - Entry point.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char letter;
	
	if (letter <= 'z' && letter >= 'a')
		return (1);
	else
		return (0);

	_putchar('\n');
}
