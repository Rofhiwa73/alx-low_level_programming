#include "main.h"

/**
 * puts2 - prints every other character of a string, 
 * starting with the first character, followed by a new line.
 * @str: The string to print every other character from.
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2; /*Move to every other character*/
	}

	_putchar('\n');
}
