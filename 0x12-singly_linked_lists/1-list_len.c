/*
 * File: 1-list_len.c
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * list_len - determines the number of elements in
 * in list_t
 *@h: first node of list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
