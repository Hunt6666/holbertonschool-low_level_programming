#include "lists.h"

/**
 *add_dnodeint - adds a node to the beginning of a dlistint_t
 *@head: the head of the list to add node to
 *@n: the int to be in this node
 *Return: address of new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
