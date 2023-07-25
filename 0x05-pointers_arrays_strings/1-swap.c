#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: first integer
 * @b: another integer
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
