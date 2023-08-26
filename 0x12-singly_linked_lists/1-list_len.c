#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /*Initialize a counter to keep track of elemnets no */

	/*Traverse the linked list with while counting elemts */
	while (h != NULL)
	{
		count++; /*Increment the counter for each element */
		h = h->next;
	}
	return (count);
}

