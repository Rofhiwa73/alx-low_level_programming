#include "main.h"

/**
 * _pow_recursion - function that calculates the value of x powered by y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The value of x powered by y, or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1); /* Base case: Any number to the power of 0 is 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recursive calculation */
	}
}
