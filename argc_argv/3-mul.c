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
	if( argv[1] && argc[2])
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	else	
		printf("%s\n", "Error");
		return (1);
}
