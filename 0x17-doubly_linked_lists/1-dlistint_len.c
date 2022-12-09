#include "lists.h"

/**
 * dlistint_len - gets the number n of elements in a list
 * @h: head node
 *
 * Return: returns (n) number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr = h;

	if (ptr == NULL)
		return (i);

	for (; ptr->next != NULL; ptr = ptr->next)
		i++;

	i += 1;
	return (i);

}
