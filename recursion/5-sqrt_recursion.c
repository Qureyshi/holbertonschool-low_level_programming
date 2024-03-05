#include "main.h"

/**
 *  _sqrt_recursion - returns the length of a string
 * @n: string to evaluate
 *
 * Return: the length of the string
 */

int _sqrt_recursion(int n)
{
	int a;
	a = 0;

	if ( a*a == n)
		return (a);
	else
	{
		a++;
		_sqrt_recursion(n);
	}
}

