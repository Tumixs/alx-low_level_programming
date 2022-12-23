#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t
 * head: first node
 * n: node element
 *
 * Return: returns the address of new element
 * if failed returns NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *newnode;
        dlistint_t **ptr = head;

        newnode = malloc(sizeof(dlistint_t));
        if (newnode == NULL)
                return (NULL);
        newnode->n = n;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (*ptr == NULL)
        {
                *ptr = newnode;
                return (newnode);
        }
        for (; (*ptr)->next != NULL; *ptr = (*ptr)->next)
                ;
        (*ptr)->next = newnode;
        newnode->prev = *ptr;
        return (newnode);
}