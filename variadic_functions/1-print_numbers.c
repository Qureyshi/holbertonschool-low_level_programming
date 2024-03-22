#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sums all arguments passed
 * @n: number of arguments
 * @seperator: number of arguments
 *
 * Return: sum of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if(separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);

	printf("\n");
}
