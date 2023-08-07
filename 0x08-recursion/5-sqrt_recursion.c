#include "main.h"

int sqrt_helper(int number, int root);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number.
 *
 * Return: The natural square root of the n, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}
/**
 * sqrt_helper - Helper function to calculate the natural square root.
 * @number: The number.
 * @number1: The current number for the square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */

int sqrt_helper(int number, int root)
{
	if (root * root == 0)
	{
		return (root); /* Finds the natural square root number */
	}
	else if (root * root > number)
	{
		return (-1); /* Not a perfect square, so no natural square root.*/
	}
	else
	{
		return (sqrt_helper(number, root + 1)); /* recursive search */
	}
}
