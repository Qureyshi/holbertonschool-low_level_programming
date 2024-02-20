#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= 15 ; num++)
		printf("%x", num);

	putchar('\n');

	return (0);
}
