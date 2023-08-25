#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The numebr of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->s != NULL)
		{
			printf("[%d] %s\n", h->len, h->s);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
