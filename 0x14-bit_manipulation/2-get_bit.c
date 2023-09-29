#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to retrieve the bit form.
 * @index: The index of the bit to retrieve, starting from 0.
 * Return: Value of the bit at the given index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits = sizeof(unsigned long int) * 8;

	if (index >= max_bits)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
