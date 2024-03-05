#include "main.h"

/**
 * _pow_recursion - returns the length of a string
 * @x: string to evaluate
 * @y: string to evaluate
 *
 * Return: the length of the string
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

