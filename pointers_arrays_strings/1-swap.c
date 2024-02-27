#include "main.h"

/**
 * _strlen - updates the value of the variable
 * the pointer points to to 98
 * @s: pointer to the variable to update
 * @b: pointer to the variable to update
 */
void _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	return (i);
}
