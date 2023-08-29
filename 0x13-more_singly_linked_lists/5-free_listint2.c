/*
 * File:
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Points to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free((*head));
		*head = next;
	}
	*head = NULL;
}
