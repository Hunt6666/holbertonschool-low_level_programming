#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 *free_listint- frees listint_t
 *@head: head of listint_t
 *Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	if (head == NULL)
		return;

	current = head;

	while (current->next != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);

}
