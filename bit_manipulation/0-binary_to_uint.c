#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int base = 1;
	int dec = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i != 0)
	{
		dec = dec + (b[i - 1] - '0') * base;
		base *= 2;
		i--;
	}
	return (dec);
}
