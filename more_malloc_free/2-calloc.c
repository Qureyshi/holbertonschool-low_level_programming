#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocate memory with malloc
 * @s1: unsigned int type
 * @s2: unsigned int type
 * @n: unsigned int type
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);


	if (ptr == NULL)
		return (NULL);
	
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}

	return (ptr);
}
