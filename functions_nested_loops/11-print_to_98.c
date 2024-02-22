#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - Entry point.
 * @n: number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a, b;
	
	if (n < 98)
		for (a = n ; a <= 98 ; a++)
		{	
			printf("%d\n", a);

			if (a != 98)
			{
				printf(",";
				printf(" ";
			}	
	else if (n > 98)
                for (b = n ; b >= 98 ; b--)
		{	
			printf("%d\n", b);

                        if (b != 98)
			{
				printf(",";
				printf(" ";
			}
		}
	else if (n == 98)
		printf("%d\n", n);
}
