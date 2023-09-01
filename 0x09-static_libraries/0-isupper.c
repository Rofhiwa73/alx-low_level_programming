#include "main.h"

/**
 * _isupper - Check for uppercase character.
 * @c: character to be checked.
 * Return: 1 if c is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
