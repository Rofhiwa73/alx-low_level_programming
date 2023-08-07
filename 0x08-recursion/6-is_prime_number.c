#include "main.h"

int is_prime_number_helper(int n, int divisor);

/**
 * is_prime_number - Checks if input integer is a prime number.
 * @n: input integer.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Not a prime number */
	}

	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, divisor + 1));
}
