#include "main.h"

/**
 * is_prime_number - returns the length of a string
 * @x: string to evaluate
 * @y: string to evaluate
 *
 * Return: the length of the string
 */
int check(int m, int i)
{	if (m % i == 0)
		return (0);
	if (i >= m/2)
		return (1);
	else
		return check(m, i + 1);


}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	else
		return check(n, 2);
}

