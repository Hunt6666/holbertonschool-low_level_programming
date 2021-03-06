#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 *add_nodeint- add a new node to the beginning of a listint_t
 *@head: head of list_t
 *@n: int to be added as node
 *Return: address of new element or NULL if fails
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));


	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->n = n;


	new->next = *head;
	*head = new;
	return (*head);
}
