#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add a new node at the beginnin of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: The string to be stored int the new element.
 *
 * Return: The address of the element, or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Allocate memory for the new node*/
	list_t *new_node;
	char *dup_str;
	int str_len = strlen(str); /*Calculate the length of the input string*/

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL); /*Memory alloc failed*/
	}

	/*Duplicate the input string using strdup*/
	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		/*Memory allocation for the string failed*/
		free(new_node); /* Free previously allocated memory*/
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = *head;

	/*Update the head pointer to point to new node*/
	*head = new_node;

	/*Address to new node returned*/
	return (new_node);
}

