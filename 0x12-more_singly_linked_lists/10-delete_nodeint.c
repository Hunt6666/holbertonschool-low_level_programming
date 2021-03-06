#include"lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *delete_nodeint_at_index- deletes a node at input index of listint_t
 *@head: head of linked list
 *@index: the index of node to be deleted
 *Return: 1 if succeeded -1 if not
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0 ; i < index - 1 ; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next->next;

	free(current->next);
	current->next = next;

	return (1);
}
