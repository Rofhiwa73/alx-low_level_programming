#include "main.h"

/**
 * _strcat - Cancatenates two strings.
 * @dest: Pomter to the concatenated string.
 * @src: Poniter to the source string to be appended.
 *
 * Return: A ponter to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;/*Store the starting address of dest*/

	/*Move the dest pointer to end of dest string*/
	while (*dest != '\0')
	{
		dest++;
	}

	/*Append chars from src to dest until end of src is reached*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
