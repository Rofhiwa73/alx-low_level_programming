#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: This is the charcater.
 * Return: 1 if character is a letter, uppercase or lowercase, 0 if not.
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

	{
	return (1);
	}
	return (0);
}
