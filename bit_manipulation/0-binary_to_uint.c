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
	int num, temp;
	unsigned int dec = 0;
	int base = 1;

	num = atoi(b);
	temp = num;	
	while (temp) 
	{
		int last_digit = temp % 10;
		temp = temp / 10;
		dec += last_digit * base;
		base = base * 2;
	}
	return dec;
}
