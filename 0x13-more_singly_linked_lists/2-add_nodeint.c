/*
 * File: 2-add_nodeint.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Current first node.
 * @n: Node element.
 *
 * Return: Returns a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
