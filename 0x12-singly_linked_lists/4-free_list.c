#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Fress a list_t list.
 * @head: Pinter to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
