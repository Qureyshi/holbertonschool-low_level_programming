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
	if( argc == 3)
	{
		printf("%d\n", (int)(argv[1]) * (int)(argv[2]));
		return (0);
	}
	else	
	{
		printf("%s\n", "Error");
		return (1);
	}
}
