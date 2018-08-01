#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 *add_node_end- add a new node to the end of a list_t
 *@head: head of list_t
 *@str: string to be added as node
 *Return: address of new element or NULL if fails
 */


list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new = malloc(sizeof(struct list_s));
	list_t *current;
	char *nstr;
	size_t size;
	int i;


	if (str == NULL)
	{
		nstr = NULL;
		i = 0;
	}
	if (!new)
		return (NULL);
	if (str)
	{
		for (i = 0 ; str[i] ; i++)
			;
		nstr = strdup(str);
	}
	else
		i = 0;
	size = i;
	if (*head == NULL)
	{
		(void)current;
		new->str = nstr;
		new->len = size;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		new->str = nstr;
		new->len = size;
		current = *head;
		while (1)
		{
			if (current->next == NULL)
			{
				current->next = new;
				break;
			}
			current = current->next;
		}
	}
	return (*head);
}
