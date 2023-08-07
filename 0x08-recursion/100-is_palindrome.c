#include "main.h"
#include <string.h>

int check_palindrome(char *s, int left, int right);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: String to be checked.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function that checks if a string is a palindrome.
 * @s: String to be checked.
 * @left: The left side of string.
 * @right: The right side of the string.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1); /* Palindrome */
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0); /* Not palindrome */
	}
}
