#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Function that compares two strings.
 * @s1: The first input string.
 * @s2: The second input string with wildcard '*' support.
 *
 * Return: 1 if strings are identical, 0 if otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/*If current char in s2 is '*', we can choose to skip or mix any chars*/
	if (*s2 == '*')
	{
		/* Try skipping '*' in s2 */
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	/*If chars match or s2 contains '?', move bot pointers forward */
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}



