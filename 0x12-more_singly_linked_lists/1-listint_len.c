#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *listint_len- prints elements of listint_t list
 *@h: the list to be printed
 *Return: number of nodes
 */




size_t listint_len(const listint_t *h)
{

	if (h == NULL)
		return (0);
	return (listint_len(h->next) + 1);
}
