#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 *free_listint2- frees listint_t
 *@head: head of listint_t
 *Return: void
 */


void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;

}
