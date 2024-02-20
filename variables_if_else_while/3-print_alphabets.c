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
	char ch;
	char uch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);

	for (uch = 'A' ; uch <= 'Z' ; uch++)
		putchar(uch);

	putchar('\n');

	return (0);
}
