#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initialize it
 * with a specific char.
 * @size: The size of an array.
 * @c: The character to intialize the array with.
 *
 * Return: A pointer to the newly created array,
 * or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0) /* Check if provided size is 0. */
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size); /* Allocate memory using malloc. */

	if (arr == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
