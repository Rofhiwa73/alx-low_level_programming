#include "main.h"

int helper_sqrt_recursion(int num, int root);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper_sqrt_recursion(n, 0));
	}
}

/**
 * helper_sqrt_recursion - Helper function to calculate the
 * natural square root.
 * @num: The number.
 * @root: The current number for the square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int helper_sqrt_recursion(int num, int root)
{
	if ((root * root) == num)
	{
		return (root); /* Finds the natural square root number */
	}
	else if ((root * root) > num)
	{
		return (-1); /* Not a perfect square, so no natural square root. */
	}
	else
	{
		return (helper_sqrt_recursion(num, root + 1)); /* recursive search */
	}
}
