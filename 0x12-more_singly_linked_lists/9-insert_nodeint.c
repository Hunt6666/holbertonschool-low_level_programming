#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *insert_nodeint_at_index- inserts a new node at a given index
 *@head: the head of the listint_t
 *@idx: the index that the new node will go to
 *@n: the value that will go into the n value of new node
 *Return: NULL if fails NULL if not possible or address of new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;

	if (new == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		free(new);
		return (NULL);
	}


	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		new->n = n;
		return (new);
	}

	current = *head;

	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (current->next == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}

	if (current->next == NULL)
	{
		current->next = new;
		new->n = n;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	new->n = n;
	return (new);
}
