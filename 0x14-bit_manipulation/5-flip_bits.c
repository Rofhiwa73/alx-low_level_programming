#include <stdio.h>
#include "main.h"

/**
 * count_set_bits - Counts the number of set bits in  a number.
 * @n: The input number.
 *
 * Return: Number of set bits.
 */
unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - Count num of bits needed to flip to get from one num to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;

	xor_result = n ^ m;
	return (count_set_bits(xor_result));
}
