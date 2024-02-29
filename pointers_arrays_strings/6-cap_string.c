#include "main.h"

/**
 * cap_string - concatenate two strings
 * @c: char string to concatenate to
 *
 * Return: pointer to resulting string `dest`
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			if(c[i - 1] > 96 && c[i - 1] < 123)
				c[i] -= 32;
		}
	}

	return (c);

}
