#include "main.h"

/**
 * check - returns the length of a string
 * @m: string to evaluate
 * @i: string to evaluate
 *
 * Return: the length of the string
 */
int check(int m, int i)
{
	if (i * i == m)
		return (i);
	if (i * i > m)
		return (-1);
	else
		return (check(m, i + 1));
}
/**
 * _sqrt_recursion - returns the length of a string
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);

	else
		return (check(n, 1));
}

