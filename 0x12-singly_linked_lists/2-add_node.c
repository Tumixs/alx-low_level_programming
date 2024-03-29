/*
 * File: 2-add_node.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of *list_t*
 * @head: first node
 * @str: node element
 *
 * Return: returns the address of the new element,
 * returns NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
