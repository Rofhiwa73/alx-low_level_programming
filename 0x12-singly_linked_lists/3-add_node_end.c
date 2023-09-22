#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @str: The string to be stored in the new element.
 *
 * Return: The address to the new element, or NULL to failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;

	/*Allocate memory for the new node*/
	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*Duplicate the input string using strdup*/
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = strlen(str); /*Store the length of the string*/
	new_node->next = NULL; /*This new node will be last, so its next to NULL*/

	if (*head == NULL)
	{
		/*If the list is empty, this new node is the head*/
		*head = new_node;
	}
	else
	{
		/*Transverse to the last node*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/*Link the new node to the last node*/
		temp->next = new_node;
	}
	return (new_node);
}
