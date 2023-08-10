#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Create a pointer to a newly allocated space in memory, which
 * contains a duplicate of the string.
 * @str: string to be duplicated.
 *
 * Return: Pointer to newly duplicated string,NULL if it fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of input string */
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1)); /* assign memory */

	if (duplicate == NULL)
	{
		return (NULL); /* Memory allocation fails */
	}

	for (i = 0; i <= length; i++) /*Copy chars from input to duplicate str*/
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
