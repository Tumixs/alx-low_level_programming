#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to first node
 * @n: node element
 *
 * Return: returns the address of the new element
 * returns NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	/* create new node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	/* initialize new node */
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	/* initialize empty list */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	/* insert new node at head*/
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
