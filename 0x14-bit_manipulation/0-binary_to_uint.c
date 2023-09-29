#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there's an invalid char or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = result << 1; /*Left shift the current result by 1 */
		result += (*b - '0'); /*Add the binary digit to the result */

		b++; /*Move to the next character in the next string */
	}
	return (result);
}
