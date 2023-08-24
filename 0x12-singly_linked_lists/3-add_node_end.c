/*
 * File: 3-add_node_end.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: first node
 * @str: node element
 *
 * Return: returns the address of the new element,
 * returns NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		*head = new;
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (new);
}
