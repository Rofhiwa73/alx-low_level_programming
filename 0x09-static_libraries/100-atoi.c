#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* To store the sign of the number */
	int result = 0;
	int i = 0;

	/* Handle sign characters */
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
