/*
 * File: 0-print_listint.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * print_listint - Prints all elements of a listint_t
 * @h: First node.
 *
 * Return: Returns the number of elements printed.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
