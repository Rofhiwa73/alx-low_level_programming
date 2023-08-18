#include "main.h"

/**
 * rev_string - Function that reverses a string.
 * @s: String to be reversed.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Swap characters to reverse the string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
