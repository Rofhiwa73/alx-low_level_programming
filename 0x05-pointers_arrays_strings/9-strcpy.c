#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @src: The source string.
 * @dest: The destination buffer.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0'; /* Ensure the destination string is null-terminated */

	return (dest);
}
