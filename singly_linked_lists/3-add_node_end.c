#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Prints all the elements of a list_t list.
 * @head: The list_t list.
 * @str: The list_t list.
 *
 * Return: The number of nodes in h.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *lk, *last;

	lk = malloc(sizeof(list_t));
	if (lk == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(lk);
		return (NULL);
	}
	while (dup[len] != '\0')
	{
		len++;
	}
	lk->str = dup;
	lk->len = len;
	lk->next = NULL;

	if (*head == NULL)
		*head = lk;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = lk;
	}
	return (*head);
}
