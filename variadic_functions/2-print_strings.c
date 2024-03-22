#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - sums all arguments passed
 * @n: number of arguments
 * @separator: number of arguments
 *
 * Return: sum of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *string;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);

	printf("\n");
}
