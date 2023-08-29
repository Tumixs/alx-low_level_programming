/*
 * File: 1-listint_len.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * listint_len - Prints the number of elements in a linked listint_t list.
 * @h: First node.
 * Return: Returns the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
