#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet(void);

	_putchar('\n');

	return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
}
