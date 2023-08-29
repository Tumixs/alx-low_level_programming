/*
 * File: 4-free_listint.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @head: First node.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (next)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
