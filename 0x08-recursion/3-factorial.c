#include "main.h"

/**
 * factorial - Function that calculated factorial of a number.
 * @n: The number.
 *
 * Return: The factorial of n, or -1 for errors.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 to indicate errors for negative numbers*/
	}
	else if (n == 0)
	{
		return (1); /* Base case: Factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
