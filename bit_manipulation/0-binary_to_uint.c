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
int bin, dec = 0;
int i = 0;
     
    bin = atoi(b);
 
    for(i; bin; i++, bin /= 10) 
        if (bin % 10)
            dec += pow(2, i);
 
    printf("%d", dec);


}
