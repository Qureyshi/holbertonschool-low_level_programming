#include "main.h"

/**
 * *string_toupper - concatenate two strings
 * @a: char string to concatenate to
 * @n: char string
 *
 * Return: pointer to resulting string `dest`
 */

char *string_toupper(char *c)
{
	int i;
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}

	return (c);

}
