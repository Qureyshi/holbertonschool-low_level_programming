#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

list_t *add_node(list_t **head, const char *str){
	char *dup;
	int len;
	list_t *lk;

	dup = strdup(str);
	len = strlen(dup);
	lk = malloc(sizeof(list_t));
	lk->str = dup;
	lk->len = len;
	lk->next = *head;
	*head =  lk;
	return(lk);
}
