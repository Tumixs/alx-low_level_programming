#include "lists.h"

/**
 * print_dlistint - prints all the elments of a dlistint_t list
 * @h: pointer to head node
 *
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *ptr = h;

	if (ptr == NULL)
		return (i);
	for (; ptr->next != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		i++;
	}
	printf("%d\n", ptr->n);
	i += 1;
	return (i);
}
