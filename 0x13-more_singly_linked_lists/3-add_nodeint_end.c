/*
 * File: 3-add_nodeint_end.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to first node.
 * @n: Element to add.
 *
 * Return: Returns the address if the new element of NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		/* Name Conflict: Remember head is just a pointer not the head node itself */
		while ((*head)->next)
			head = &((*head)->next);
		(*head)->next = new;
	}
	return (new);
}
