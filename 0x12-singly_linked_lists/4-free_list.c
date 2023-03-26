/*
 * Project 0x12: Singly linked list - Task 4
 * Author: Asere Oluwatumise S.
 */
#include "lists.h"
/**
 * free_list - frees a list from memory
 * @head: first node in list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = node->next;
		free(node->str);
		free(node);
	}
}
