#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: list start
 * Description: if string is NULL it prints nil
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const struct list_s *next = h;

	while (next != NULL)
	{
		if (next->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", next->len, next->str);
		i++;
		next = next->next;
	}
	return (i);
}
