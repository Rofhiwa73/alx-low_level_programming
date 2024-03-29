#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The string to print the second half from.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index for the second half */
	start_index = length / 2;

	if (length % 2 != 0)
	{
		start_index++;
	}

	/* Print the second half of the string */
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
