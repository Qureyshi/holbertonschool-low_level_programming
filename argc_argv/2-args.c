#include <stdio.h>
#include "main.h"

/**
 * main - returns the length of a string
 * @argc: string to evaluate
 * @argv: string to evaluate
 *
 * Return: the length of the string
 */
int main(int argc, char *argv[])
{	
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", arg[i]);

	return (0);
}
