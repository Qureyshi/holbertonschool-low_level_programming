#include "main.h"

/**
 * factorial - returns the length of a string
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}

