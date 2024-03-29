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
	if (m % i == 0)
		return (0);
	if (i >= m / 2)
		return (1);
	else
		return (check(m, i + 1));
}
/**
 * is_prime_number - returns the length of a string
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else
		return (check(n, 2));
}

